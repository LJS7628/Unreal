#include "CPlayer.h"
#include "Global.h"
#include "GameFramework/SpringArmComponent.h" //������ ��
#include "Components/CapsuleComponent.h" //ĸ��������Ʈ
#include "Camera/CameraComponent.h" //ī�޶�
#include "Components/SkeletalMeshComponent.h" //���̷�Ż �޽�
#include "GameFramework/CharacterMovementComponent.h" //ĳ���� �̵�

ACPlayer::ACPlayer()
{
	CHelpers::CreateComponent(this, &SpringArm, "SpringArm", GetCapsuleComponent());
	CHelpers::CreateComponent(this, &Camera, "Camera", SpringArm);

	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "/Script/Engine.SkeletalMesh'/Game/CustomPackages/Fantasy_Pack/Characters/Barbarian/Mesh/SK_Barbarian_Full.SK_Barbarian_Full'");
	GetMesh()->SetSkeletalMesh(mesh);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));


	bUseControllerRotationYaw = false;  //��Ʈ�ѷ� Yawȸ�� ��� X
	GetCharacterMovement()->bOrientRotationToMovement = true; //�̵����⿡ ���缭 ȸ��
	GetCharacterMovement()->MaxWalkSpeed = 400; //�ȱ� �ִ� �ӵ� 

	SpringArm->SetRelativeLocation(FVector(0, 0, 60));
	SpringArm->TargetArmLength = 200;
	SpringArm->bUsePawnControlRotation = true; //�� ��Ʈ�ѷ� ȸ�����
	SpringArm->bEnableCameraLag = true; //�ε巯�� ������
}

void ACPlayer::BeginPlay()
{
	Super::BeginPlay();
}

void ACPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACPlayer::OnMoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACPlayer::OnMoveRight);
	PlayerInputComponent->BindAxis("HorizontalLook", this, &ACPlayer::OnHorizontalLook);
	PlayerInputComponent->BindAxis("VerticalLook", this, &ACPlayer::OnVerticalLook);

	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Pressed, this, &ACPlayer::OnRun);
	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Released, this, &ACPlayer::OffRun);

	PlayerInputComponent->BindAction("Jumping", EInputEvent::IE_Pressed, this, &ACPlayer::OnJump);
}

// ���� �̵�
void ACPlayer::OnMoveForward(float InAxisValue)
{
	FRotator rotation = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotation).GetForwardVector();

	AddMovementInput(direction, InAxisValue);
}

// �¿� �̵�
void ACPlayer::OnMoveRight(float InAxisValue)
{
	FRotator rotation = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotation).GetRightVector();

	AddMovementInput(direction, InAxisValue);
}

// ���콺 ���� ȸ��ó��
void ACPlayer::OnHorizontalLook(float InAxisValue)
{
	AddControllerYawInput(InAxisValue);
}

// ���콺 ���� ȸ�� ó��
void ACPlayer::OnVerticalLook(float InAxisValue)
{
	AddControllerPitchInput(InAxisValue);
}

// �޸���
void ACPlayer::OnRun()
{
	GetCharacterMovement()->MaxWalkSpeed = 600;
}

// �޸��� ���� : �ȱ� �ӵ� 400���� Rollback
void ACPlayer::OffRun()
{
	GetCharacterMovement()->MaxWalkSpeed = 400;
}

void ACPlayer::OnJump()
{
	GetCharacterMovement()->JumpZVelocity = 800.f;
	Jump();
}
