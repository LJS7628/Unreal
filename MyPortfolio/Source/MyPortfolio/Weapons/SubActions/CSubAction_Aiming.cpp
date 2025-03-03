#include "../../Weapons/SubActions/CSubAction_Aiming.h"
#include "../../Global.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "../../Components/CStateComponent.h"
#include "../../Weapons/Attachments/CAttachment_Bow.h"
#include "Curves/CurveVector.h"




UCSubAction_Aiming::UCSubAction_Aiming()
{
	CHelpers::GetAsset<UCurveVector>(&Curve, "/Script/Engine.CurveVector'/Game/Weapons/Bow/Curve_Aiming.Curve_Aiming'");
}

void UCSubAction_Aiming::BeginPlay(ACharacter* InOwner, ACAttachment* InAttachment, UCDoAction* InDoAction)
{
	Super::BeginPlay(InOwner, InAttachment, InDoAction);

	SpringArm = CHelpers::GetComponent<USpringArmComponent>(InOwner);
	Camera = CHelpers::GetComponent<UCameraComponent>(InOwner);

	FOnTimelineVector timeline;
	timeline.BindUFunction(this, "OnAiming");

	Timeline.AddInterpVector(Curve, timeline);
	Timeline.SetPlayRate(AimingSpeed);
}

void UCSubAction_Aiming::Tick(float InDeltaTime)
{
	Super::Tick(InDeltaTime);

	Timeline.TickTimeline(InDeltaTime);
}

void UCSubAction_Aiming::Pressed()
{
	CheckNull(SpringArm);
	CheckNull(Camera);

	Super::Pressed();

	State->OnSubActionMode();

	OriginData.TargetArmLength = SpringArm->TargetArmLength;
	OriginData.SocketOffset = SpringArm->SocketOffset;
	OriginData.bEnableCameraLag = SpringArm->bEnableCameraLag;
	OriginData.CameraLocation = Camera->GetRelativeLocation();

	SpringArm->TargetArmLength = AimData.TargetArmLength;
	SpringArm->SocketOffset = AimData.SocketOffset;
	SpringArm->bEnableCameraLag = AimData.bEnableCameraLag;
	Camera->SetRelativeLocation(AimData.CameraLocation);

	Timeline.PlayFromStart();
}

void UCSubAction_Aiming::Released()
{
	CheckNull(SpringArm);
	CheckNull(Camera);

	Super::Released();

	State->OffSubActionMode();

	SpringArm->TargetArmLength = OriginData.TargetArmLength;
	SpringArm->SocketOffset = OriginData.SocketOffset;
	SpringArm->bEnableCameraLag = OriginData.bEnableCameraLag;
	Camera->SetRelativeLocation(OriginData.CameraLocation);

	Timeline.ReverseFromEnd();
}

void UCSubAction_Aiming::OnAiming(FVector Output)
{
	Camera->FieldOfView = Output.X;

}
