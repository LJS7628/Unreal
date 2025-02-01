#include "../Components/CMovementComponent.h"
#include "../Global.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h" //ĳ���� �̵�

UCMovementComponent::UCMovementComponent()
{
	

}

void UCMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerCharacter = Cast<ACharacter>(GetOwner());
	CheckNull(OwnerCharacter);

	//ī�޶� �� ����
	APlayerController* playerController = OwnerCharacter->GetController<APlayerController>();
	if (!!playerController) 
	{
		playerController->PlayerCameraManager->ViewPitchMin = PitchAngle.X;
		playerController->PlayerCameraManager->ViewPitchMax = PitchAngle.Y;
	}
}

// ���� �̵�
void UCMovementComponent::OnMoveForward(float InAxisValue)
{
	CheckFalse(bCanMove);

	FRotator rotation = FRotator(0, OwnerCharacter->GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotation).GetForwardVector();

	OwnerCharacter->AddMovementInput(direction, InAxisValue);
}

// �¿� �̵�
void UCMovementComponent::OnMoveRight(float InAxisValue)
{
	CheckFalse(bCanMove);

	FRotator rotation = FRotator(0, OwnerCharacter->GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotation).GetRightVector();

	OwnerCharacter->AddMovementInput(direction, InAxisValue);
}

// ���콺 ���� ȸ��ó��
void UCMovementComponent::OnHorizontalLook(float InAxisValue)
{
	CheckTrue(bFixedCamera);
	OwnerCharacter->AddControllerYawInput(InAxisValue * HorizontalLook * GetWorld()->GetDeltaSeconds());
}

// ���콺 ���� ȸ�� ó��
void UCMovementComponent::OnVerticalLook(float InAxisValue)
{
	CheckTrue(bFixedCamera);
	OwnerCharacter->AddControllerPitchInput(InAxisValue * VerticalLook * GetWorld()->GetDeltaSeconds());
}

// �̵� �ӵ� ����
void UCMovementComponent::SetSpeed(ESpeedType InType)
{
	OwnerCharacter->GetCharacterMovement()->MaxWalkSpeed = Speed[(int32)InType];
}

// ���� 
void UCMovementComponent::OnSprint()
{
	SetSpeed(ESpeedType::Sprint);
}

// �޸���
void UCMovementComponent::OnRun()
{
	SetSpeed(ESpeedType::Run);
}

// �ȱ�
void UCMovementComponent::OnWalk()
{
	SetSpeed(ESpeedType::Walk);
}

// �̵� ����
void UCMovementComponent::Move()
{
	bCanMove = true;
}

// �̵� �Ұ���
void UCMovementComponent::Stop()
{
	bCanMove = false;
}

