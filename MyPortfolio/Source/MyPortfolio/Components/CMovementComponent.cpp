#include "../Components/CMovementComponent.h"
#include "../Global.h"
#include "GameFramework/Character.h" //캐릭터 
#include "GameFramework/PlayerController.h" //플레이어 컨트롤러
#include "GameFramework/CharacterMovementComponent.h" //캐릭터 이동

UCMovementComponent::UCMovementComponent()
{
	

}

void UCMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerCharacter = Cast<ACharacter>(GetOwner());
	CheckNull(OwnerCharacter);

	//카메라 각 조절
	APlayerController* playerController = OwnerCharacter->GetController<APlayerController>();
	if (!!playerController) 
	{
		playerController->PlayerCameraManager->ViewPitchMin = PitchAngle.X;
		playerController->PlayerCameraManager->ViewPitchMax = PitchAngle.Y;
	}
}

// 전후 이동
void UCMovementComponent::OnMoveForward(float InAxisValue)
{
	CheckFalse(bCanMove);

	FRotator rotation = FRotator(0, OwnerCharacter->GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotation).GetForwardVector();

	OwnerCharacter->AddMovementInput(direction, InAxisValue);
}

// 좌우 이동
void UCMovementComponent::OnMoveRight(float InAxisValue)
{
	CheckFalse(bCanMove);

	FRotator rotation = FRotator(0, OwnerCharacter->GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotation).GetRightVector();

	OwnerCharacter->AddMovementInput(direction, InAxisValue);
}

// 마우스 수평 회전처리
void UCMovementComponent::OnHorizontalLook(float InAxisValue)
{
	CheckTrue(bFixedCamera);
	OwnerCharacter->AddControllerYawInput(InAxisValue * HorizontalLook * GetWorld()->GetDeltaSeconds());
}

// 마우스 수직 회전 처리
void UCMovementComponent::OnVerticalLook(float InAxisValue)
{
	CheckTrue(bFixedCamera);
	OwnerCharacter->AddControllerPitchInput(InAxisValue * VerticalLook * GetWorld()->GetDeltaSeconds());
}

// 이동 속도 설정
void UCMovementComponent::SetSpeed(ESpeedType InType)
{
	OwnerCharacter->GetCharacterMovement()->MaxWalkSpeed = Speed[(int32)InType];
}

// 질주 
void UCMovementComponent::OnSprint()
{
	SetSpeed(ESpeedType::Sprint);
}

// 달리기
void UCMovementComponent::OnRun()
{
	SetSpeed(ESpeedType::Run);
}

// 걷기
void UCMovementComponent::OnWalk()
{
	SetSpeed(ESpeedType::Walk);
}

// 이동 가능
void UCMovementComponent::Move()
{
	bCanMove = true;
}

// 이동 불가능
void UCMovementComponent::Stop()
{
	bCanMove = false;
}

//컨트롤러 회전 사용
void UCMovementComponent::EnableControlRotation()
{
	
	OwnerCharacter->bUseControllerRotationYaw = true; 
	OwnerCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;
}

//컨트롤러 회전 미사용
void UCMovementComponent::DisenableControlRotation()
{
	OwnerCharacter->bUseControllerRotationYaw =false; // 컨트롤러 Yaw회전 사용 X
	OwnerCharacter->GetCharacterMovement()->bOrientRotationToMovement = true; //이동방향에 맞춰서 회전
}

// 회피
void UCMovementComponent::BackStep()
{
	EnableControlRotation();

	OwnerCharacter->PlayAnimMontage(BackStepMontage, BackStepMontage_PlayRate);
}

