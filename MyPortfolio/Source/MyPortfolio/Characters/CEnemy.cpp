#include "../Characters/CEnemy.h"
#include "../Global.h"


#include "GameFramework/CharacterMovementComponent.h" //ĳ���� �̵�
#include "Components/CapsuleComponent.h" // ĸ���ݶ��̴� ������Ʈ

#include "../Characters/CAnimInstance.h" //ĳ���� �ִϸ��̼�
#include "../Weapons/CWeaponStructures.h" // ĳ���� ���� ������Ʈ
#include "../Components/CMovementComponent.h" // ĳ���� �̵� ���� ������Ʈ
#include "../Components/CStateComponent.h" // ���� ������Ʈ
#include "../Components/CHealthPointComponent.h" // ü�� ������Ʈ 

ACEnemy::ACEnemy()
{
	//������Ʈ ����
	CHelpers::CreateActorComponent<UCMovementComponent>(this, &Movement, "Movement");
	CHelpers::CreateActorComponent<UCStateComponent>(this, &State, "State");
	CHelpers::CreateActorComponent<UCHealthPointComponent>(this, &HealthPoint, "HealthPoint");

	//�޽� ��ġ ����
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	//�޽� ���� �� ����
	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "/Script/Engine.SkeletalMesh'/Game/CustomPackages/Fantasy_Pack/Characters/Viking_Ulf/Mesh/SK_Ulf_Full.SK_Ulf_Full'");
	GetMesh()->SetSkeletalMesh(mesh);

	// �ִϸ��̼� 
	TSubclassOf<UCAnimInstance> animInstance;
	CHelpers::GetClass<UCAnimInstance>(&animInstance, "/Script/Engine.AnimBlueprint'/Game/Characters/ABP_Character.ABP_Character_C'");
	GetMesh()->SetAnimClass(animInstance);

	GetCharacterMovement()->RotationRate = FRotator(0, 720, 0);
}

void ACEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	Movement->OnWalk();

	//���� �̺�Ʈ ���� 
	State->OnStateTypeChanged.AddDynamic(this, &ACEnemy::OnStateTypeChanged);
}

//������ ó��
float ACEnemy::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	DamageAmount = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	DamageData.Power = DamageAmount;
	DamageData.Attacker = Cast<ACharacter>(EventInstigator->GetPawn());
	DamageData.Causer = DamageCauser;

	DamageData.Event = (FActionDamageEvent*)(&DamageEvent);

	State->SetDamagedMode();

	return DamageAmount;
}

//���� ��ȭ
void ACEnemy::OnStateTypeChanged(EStateType InPrevType, EStateType InNewType)
{
	switch (InNewType)
	{
		case EStateType::Damaged: Damaged(); break;
		case EStateType::Dead: Dead(); break;
	}

}

void ACEnemy::Damaged()
{
	//Apply Damage
	{
		HealthPoint->Damage(DamageData.Power);
		DamageData.Power = 0.0f;
	}

	//������ ó���� ���� ȿ�� ó��
	if (!!DamageData.Event && !!DamageData.Event->HitData)
	{
		FHitData* hitData = DamageData.Event->HitData;

		hitData->PlayHitMotion(this);
		hitData->PlayHitStop(this);
		hitData->PlayEffect(this);
		hitData->PlaySound(this);
		hitData->PlayCameraShake(this);

		if (HealthPoint->IsDead() == false)
		{
			FVector start = GetActorLocation();
			FVector target = DamageData.Attacker->GetActorLocation();
			FVector direction = target - start;
			direction.Normalize();

			if (hitData->Launch > 0.0f)
				LaunchCharacter(-direction * hitData->Launch, false, false);

			SetActorRotation(UKismetMathLibrary::FindLookAtRotation(start, target));
		}
	}

	//����� �浹 ���� (ȭ�� �浹 ��)
	if (HealthPoint->IsDead() == true) 
	{
		State->SetDeadMode();
		GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		return;
	}

	// Ÿ�� ���� �ʱ�ȭ (���� ����) 
	DamageData.Attacker = nullptr;
	DamageData.Causer = nullptr;
	DamageData.Event = nullptr;
}

//����� �浹 ����
void ACEnemy::Dead()
{
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	PlayAnimMontage(DeadMontage, DeadMontage_PlayRate);
}

void ACEnemy::End_Damaged()
{
	State->SetIdleMode();
}

// ��� ���� ���� 
void ACEnemy::End_Dead()
{
	Destroy();
}



