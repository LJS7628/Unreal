#include "CPlayer.h"
#include "Global.h"
#include "GameFramework/SpringArmComponent.h" //스프링 암
#include "Components/CapsuleComponent.h" //캡슐컴포넌트
#include "Camera/CameraComponent.h" //카메라
#include "Components/SkeletalMeshComponent.h" //스켈레탈 메쉬
#include "GameFramework/CharacterMovementComponent.h" //캐릭터 이동

ACPlayer::ACPlayer()
{
	CHelpers::CreateComponent(this, &SpringArm, "SpringArm", GetCapsuleComponent());
	CHelpers::CreateComponent(this, &Camera, "Camera", SpringArm);

	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "/Script/Engine.SkeletalMesh'/Game/CustomPackages/Fantasy_Pack/Characters/Barbarian/Mesh/SK_Barbarian_Full.SK_Barbarian_Full'");
	GetMesh()->SetSkeletalMesh(mesh);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));


	bUseControllerRotationYaw = false;  //컨트롤러 Yaw회전 사용 X
	GetCharacterMovement()->bOrientRotationToMovement = true; //이동방향에 맞춰서 회전
	GetCharacterMovement()->MaxWalkSpeed = 400; //걷기 최대 속도 

	SpringArm->SetRelativeLocation(FVector(0, 0, 60));
	SpringArm->TargetArmLength = 200;
	SpringArm->bUsePawnControlRotation = true; //폰 컨트롤러 회전사용
	SpringArm->bEnableCameraLag = true; //부드러운 움직임
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

// 전후 이동
void ACPlayer::OnMoveForward(float InAxisValue)
{
	FRotator rotation = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotation).GetForwardVector();

	AddMovementInput(direction, InAxisValue);
}

// 좌우 이동
void ACPlayer::OnMoveRight(float InAxisValue)
{
	FRotator rotation = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotation).GetRightVector();

	AddMovementInput(direction, InAxisValue);
}

// 마우스 수평 회전처리
void ACPlayer::OnHorizontalLook(float InAxisValue)
{
	AddControllerYawInput(InAxisValue);
}

// 마우스 수직 회전 처리
void ACPlayer::OnVerticalLook(float InAxisValue)
{
	AddControllerPitchInput(InAxisValue);
}

// 달리기
void ACPlayer::OnRun()
{
	GetCharacterMovement()->MaxWalkSpeed = 600;
}

// 달리기 해제 : 걷기 속도 400으로 Rollback
void ACPlayer::OffRun()
{
	GetCharacterMovement()->MaxWalkSpeed = 400;
}

void ACPlayer::OnJump()
{
	GetCharacterMovement()->JumpZVelocity = 800.f;
	Jump();
}
