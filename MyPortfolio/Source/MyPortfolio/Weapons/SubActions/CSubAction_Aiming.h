#pragma once

#include "CoreMinimal.h"
#include "../../Weapons/CSubAction.h"
#include "Components/TimelineComponent.h" 
#include "CSubAction_Aiming.generated.h"


USTRUCT()
struct FAimData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float TargetArmLength = 100;

	UPROPERTY(EditAnywhere)
	FVector SocketOffset = FVector(0, 30, 10);

	UPROPERTY(EditAnywhere)
	bool bEnableCameraLag;

	UPROPERTY(EditAnywhere)
	FVector CameraLocation;
};

UCLASS(Blueprintable)
class MYPORTFOLIO_API UCSubAction_Aiming : public UCSubAction
{
	GENERATED_BODY()
	

private:
	UPROPERTY(EditAnywhere, Category = "Aiming")
	class UCurveVector* Curve;

	UPROPERTY(EditAnywhere, Category = "Aiming")
	FAimData AimData;

	UPROPERTY(EditAnywhere, Category = "Aiming")
	float AimingSpeed = 200.0f;

public:
	UCSubAction_Aiming();

public:
	void Pressed() override;
	void Released() override;

public:
	void BeginPlay(class ACharacter* InOwner, class ACAttachment* InAttachment, class UCDoAction* InDoAction) override;
	void Tick(float InDeltaTime) override;

private:
	UFUNCTION()
	void OnAiming(FVector Output);

public:
	void OnUnequip() override;

private:
	class USpringArmComponent* SpringArm;
	class UCameraComponent* Camera;

private:
	FAimData OriginData;

private:
	FTimeline Timeline;

private:
	float* Bending;
};
