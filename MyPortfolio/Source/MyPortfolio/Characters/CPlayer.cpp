#include "../Characters/CPlayer.h"
#include "../Global.h"

#include "GameFramework/SpringArmComponent.h" //스프링 암
#include "Camera/CameraComponent.h" //카메라

#include "Components/CapsuleComponent.h" //캡슐 컴포넌트
#include "Components/InputComponent.h"  //Input 처리 컴포넌트
#include "Components/SkeletalMeshComponent.h" //스켈레탈 메쉬

#include "../Characters/CAnimInstance.h" //캐릭터 애니메이션
#include "../Components/CWeaponComponent.h" //캐릭터 무기 Component
#include "../Components/CStateComponent.h" //캐릭터 상태 관리 Component
#include "GameFramework/CharacterMovementComponent.h" //캐릭터 이동
#include "../Components/CMovementComponent.h" //캐릭터 이동 관리 Component
#include "Animation/AnimMontage.h" // 애님 몽타주


ACPlayer::ACPlayer()
{
	//Camera 연결
	CHelpers::CreateComponent(this, &SpringArm, "SpringArm", GetCapsuleComponent());
	CHelpers::CreateComponent(this, &Camera, "Camera", SpringArm);

	//Component 연결
	CHelpers::CreateActorComponent(this, &Weapon, "Weapon");
	CHelpers::CreateActorComponent(this, &State, "State");
	CHelpers::CreateActorComponent(this, &Movement, "Movement");

	//메쉬 설정
	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "/Script/Engine.SkeletalMesh'/Game/CustomPackages/Fantasy_Pack/Characters/Barbarian/Mesh/SK_Barbarian_Full.SK_Barbarian_Full'");
	GetMesh()->SetSkeletalMesh(mesh);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	//애니메이션 설정
	TSubclassOf<UCAnimInstance> animInstance;
	CHelpers::GetClass<UCAnimInstance>(&animInstance, "/Script/Engine.AnimBlueprint'/Game/Characters/ABP_Character.ABP_Character_C'");
	GetMesh()->SetAnimClass(animInstance);

	GetCharacterMovement()->MaxWalkSpeed = 400; //걷기 최대 속도 
	GetCharacterMovement()->RotationRate = FRotator(0, 720, 0); //카메라 회전 2배

	SpringArm->SetRelativeLocation(FVector(0, 0, 60));
	SpringArm->TargetArmLength = 200;
	SpringArm->bUsePawnControlRotation = true; //폰 컨트롤러 회전사용
	SpringArm->bEnableCameraLag = true; //부드러운 움직임
}

void ACPlayer::BeginPlay()
{
	Super::BeginPlay();

	//State Delegate 와 함수 연결
	State->OnStateTypeChanged.AddDynamic(this, &ACPlayer::OnStateTypeChanged);

	Movement->DisenableControlRotation();
}

void ACPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//걷기 이동
	PlayerInputComponent->BindAxis("MoveForward", Movement, &UCMovementComponent::OnMoveForward);
	PlayerInputComponent->BindAxis("MoveRight", Movement, &UCMovementComponent::OnMoveRight);

	//카메라
	PlayerInputComponent->BindAxis("HorizontalLook", Movement, &UCMovementComponent::OnHorizontalLook);
	PlayerInputComponent->BindAxis("VerticalLook", Movement, &UCMovementComponent::OnVerticalLook);

	//달리기
	PlayerInputComponent->BindAction("Sprint", EInputEvent::IE_Pressed, Movement, &UCMovementComponent::OnSprint);
	PlayerInputComponent->BindAction("Sprint", EInputEvent::IE_Released, Movement, &UCMovementComponent::OnRun);

	//점프, 회피
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


// 점프
void ACPlayer::OnJump()
{
	GetCharacterMovement()->JumpZVelocity = 800.f;
	Jump();
}

//회피
void ACPlayer::OnEvade()
{
	//무기를 장착하지 않고
	CheckFalse(State->IsIdleMode());
	//움직일 수 있고
	CheckFalse(Movement->CanMove());
	//전방으로 움직이지 않을 때 실행 가능
	CheckTrue(InputComponent->GetAxisValue("MoveForward") >= 0.0f);

	State->SetEvadeMode();

}

//카메라 확대
void ACPlayer::OnZoom(float InAxisValue)
{

}
