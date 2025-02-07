#include "../Characters/CPlayer.h"
#include "../Global.h"

#include "GameFramework/SpringArmComponent.h" //������ ��
#include "Camera/CameraComponent.h" //ī�޶�

#include "Components/CapsuleComponent.h" //ĸ�� ������Ʈ
#include "Components/InputComponent.h"  //Input ó�� ������Ʈ
#include "Components/SkeletalMeshComponent.h" //���̷�Ż �޽�

#include "../Characters/CAnimInstance.h" //ĳ���� �ִϸ��̼�
#include "../Components/CWeaponComponent.h" //ĳ���� ���� Component
#include "../Components/CStateComponent.h" //ĳ���� ���� ���� Component
#include "GameFramework/CharacterMovementComponent.h" //ĳ���� �̵�
#include "../Components/CMovementComponent.h" //ĳ���� �̵� ���� Component
#include "Animation/AnimMontage.h" // �ִ� ��Ÿ��


ACPlayer::ACPlayer()
{
	//Camera ����
	CHelpers::CreateComponent(this, &SpringArm, "SpringArm", GetCapsuleComponent());
	CHelpers::CreateComponent(this, &Camera, "Camera", SpringArm);

	//Component ����
	CHelpers::CreateActorComponent(this, &Weapon, "Weapon");
	CHelpers::CreateActorComponent(this, &State, "State");
	CHelpers::CreateActorComponent(this, &Movement, "Movement");

	//�޽� ����
	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "/Script/Engine.SkeletalMesh'/Game/CustomPackages/Fantasy_Pack/Characters/Barbarian/Mesh/SK_Barbarian_Full.SK_Barbarian_Full'");
	GetMesh()->SetSkeletalMesh(mesh);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	//�ִϸ��̼� ����
	TSubclassOf<UCAnimInstance> animInstance;
	CHelpers::GetClass<UCAnimInstance>(&animInstance, "/Script/Engine.AnimBlueprint'/Game/Characters/ABP_Character.ABP_Character_C'");
	GetMesh()->SetAnimClass(animInstance);

	GetCharacterMovement()->MaxWalkSpeed = 400; //�ȱ� �ִ� �ӵ� 
	GetCharacterMovement()->RotationRate = FRotator(0, 720, 0); //ī�޶� ȸ�� 2��

	SpringArm->SetRelativeLocation(FVector(0, 0, 60));
	SpringArm->TargetArmLength = 200;
	SpringArm->bUsePawnControlRotation = true; //�� ��Ʈ�ѷ� ȸ�����
	SpringArm->bEnableCameraLag = true; //�ε巯�� ������
}

void ACPlayer::BeginPlay()
{
	Super::BeginPlay();

	//State Delegate �� �Լ� ����
	State->OnStateTypeChanged.AddDynamic(this, &ACPlayer::OnStateTypeChanged);

	Movement->DisenableControlRotation();
}

void ACPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//�ȱ� �̵�
	PlayerInputComponent->BindAxis("MoveForward", Movement, &UCMovementComponent::OnMoveForward);
	PlayerInputComponent->BindAxis("MoveRight", Movement, &UCMovementComponent::OnMoveRight);

	//ī�޶�
	PlayerInputComponent->BindAxis("HorizontalLook", Movement, &UCMovementComponent::OnHorizontalLook);
	PlayerInputComponent->BindAxis("VerticalLook", Movement, &UCMovementComponent::OnVerticalLook);

	//�޸���
	PlayerInputComponent->BindAction("Sprint", EInputEvent::IE_Pressed, Movement, &UCMovementComponent::OnSprint);
	PlayerInputComponent->BindAction("Sprint", EInputEvent::IE_Released, Movement, &UCMovementComponent::OnRun);

	//����, ȸ��
	PlayerInputComponent->BindAction("Jumping", EInputEvent::IE_Pressed, this, &ACPlayer::OnJump);
	PlayerInputComponent->BindAction("Evade", EInputEvent::IE_Pressed, this, &ACPlayer::OnEvade);

	PlayerInputComponent->BindAction("Sword", EInputEvent::IE_Pressed, Weapon, &UCWeaponComponent::SetSwordMode);
}

void ACPlayer::OnStateTypeChanged(EStateType InPrevType, EStateType InNewType)
{
	switch (InNewType) 
	{
	case EStateType::Evade: Movement->BackStep(); break;

	}
}

void ACPlayer::End_Backstep()
{
	Movement->DisenableControlRotation();
	State->SetIdleMode();
}


// ����
void ACPlayer::OnJump()
{
	GetCharacterMovement()->JumpZVelocity = 800.f;
	Jump();
}

//ȸ��
void ACPlayer::OnEvade()
{
	//���⸦ �������� �ʰ�
	CheckFalse(State->IsIdleMode());
	//������ �� �ְ�
	CheckFalse(Movement->CanMove());
	//�������� �������� ���� �� ���� ����
	CheckTrue(InputComponent->GetAxisValue("MoveForward") >= 0.0f);

	State->SetEvadeMode();

}

//ī�޶� Ȯ��
void ACPlayer::OnZoom(float InAxisValue)
{

}
