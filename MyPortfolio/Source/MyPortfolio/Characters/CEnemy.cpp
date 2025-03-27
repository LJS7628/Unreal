#include "../Characters/CEnemy.h"
#include "../Global.h"


#include "GameFramework/CharacterMovementComponent.h" //캐릭터 이동
#include "Components/CapsuleComponent.h" // 캡슐콜라이더 컴포넌트

#include "../Characters/CAnimInstance.h" //캐릭터 애니메이션
#include "../Weapons/CWeaponStructures.h" // 캐릭터 무기 컴포넌트
#include "../Components/CMovementComponent.h" // 캐릭터 이동 관리 컴포넌트
#include "../Components/CStateComponent.h" // 상태 컴포넌트
#include "../Components/CHealthPointComponent.h" // 체력 컴포넌트 

ACEnemy::ACEnemy()
{
	//컴포넌트 연결
	CHelpers::CreateActorComponent<UCMovementComponent>(this, &Movement, "Movement");
	CHelpers::CreateActorComponent<UCStateComponent>(this, &State, "State");
	CHelpers::CreateActorComponent<UCHealthPointComponent>(this, &HealthPoint, "HealthPoint");

	//메쉬 위치 설정
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	//메쉬 설정 및 연결
	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "/Script/Engine.SkeletalMesh'/Game/CustomPackages/Fantasy_Pack/Characters/Viking_Ulf/Mesh/SK_Ulf_Full.SK_Ulf_Full'");
	GetMesh()->SetSkeletalMesh(mesh);

	// 애니메이션 
	TSubclassOf<UCAnimInstance> animInstance;
	CHelpers::GetClass<UCAnimInstance>(&animInstance, "/Script/Engine.AnimBlueprint'/Game/Characters/ABP_Character.ABP_Character_C'");
	GetMesh()->SetAnimClass(animInstance);

	GetCharacterMovement()->RotationRate = FRotator(0, 720, 0);
}

void ACEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	Movement->OnWalk();

	//상태 이벤트 연결 
	State->OnStateTypeChanged.AddDynamic(this, &ACEnemy::OnStateTypeChanged);
}

//데미지 처리
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

//상태 변화
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

	//데미지 처리시 각종 효과 처리
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

	//사망시 충돌 해제 (화살 충돌 시)
	if (HealthPoint->IsDead() == true) 
	{
		State->SetDeadMode();
		GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		return;
	}

	// 타격 이후 초기화 (꼬임 방지) 
	DamageData.Attacker = nullptr;
	DamageData.Causer = nullptr;
	DamageData.Event = nullptr;
}

//사망시 충돌 해제
void ACEnemy::Dead()
{
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	PlayAnimMontage(DeadMontage, DeadMontage_PlayRate);
}

void ACEnemy::End_Damaged()
{
	State->SetIdleMode();
}

// 사망 이후 삭제 
void ACEnemy::End_Dead()
{
	Destroy();
}



