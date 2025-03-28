#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CGhostTrail.generated.h"

UCLASS()
class MYPORTFOLIO_API ACGhostTrail : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditDefaultsOnly, Category = "Capture")
	float StartDelay = 0;

	UPROPERTY(EditDefaultsOnly, Category = "Capture")
	float Interval = 0.25f;

	UPROPERTY(EditDefaultsOnly, Category = "Capture")
	FLinearColor Color = FLinearColor(1, 1, 1, 1);

	UPROPERTY(EditDefaultsOnly, Category = "Capture")
	float Exponent = 1;

	UPROPERTY(EditDefaultsOnly, Category = "Capture")
	FVector Scale = FVector::OneVector;

	UPROPERTY(EditDefaultsOnly, Category = "Capture")
	FVector ScaleAmount = FVector::ZeroVector;

private:
	UPROPERTY(VisibleAnywhere)
	class UPoseableMeshComponent* Mesh;

public:
	ACGhostTrail();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	class ACharacter* OwnerCharacter;
	class UMaterialInstanceDynamic* Material;

	FTimerHandle TimerHandle;

};
