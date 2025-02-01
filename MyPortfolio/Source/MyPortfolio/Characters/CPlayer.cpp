#include "../Characters/CPlayer.h"
#include "../Global.h"

#include "GameFramework/SpringArmComponent.h" //스프링 암
#include "Camera/CameraComponent.h" //카메라

#include "Components/CapsuleComponent.h" //캡슐 컴포넌트
//#include "Components/InputComponent.h"
#include "Components/SkeletalMeshComponent.h" //스켈레탈 메쉬

#include "../Characters/CAnimInstance.h" //캐릭터 애니메이션
#include "../Components/CStateComponent.h" //캐릭터 상태 관리 Component
#include "GameFramework/CharacterMovementComponent.h" //캐릭터 이동
#include "../Components/CMovementComponent.h" //캐릭터 이동 관리 Component


ACPlayer::ACPlayer()
{
	//Camera 연결
	CHelpers::CreateComponent(this, &SpringArm, "SpringArm", GetCapsuleComponent());
	CHelpers::CreateComponent(this, &Camera, "Camera", SpringArm);

	//Component 연결
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

	//State Delegate 와 함수 연결
	State->OnStateTypeChanged.AddDynamic(this, &ACPlayer::OnStateTypeChanged);
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
}

void ACPlayer::OnStateTypeChanged(EStateType InPrevType, EStateType InNewType)
{
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
}

//카메라 확대
void ACPlayer::OnZoom(float InAxisValue)
{

}
