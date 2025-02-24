#pragma once

#include "CoreMinimal.h"
#include "../../Weapons/CAttachment.h"
#include "CAttachment_Bow.generated.h"

UCLASS()
class MYPORTFOLIO_API ACAttachment_Bow : public ACAttachment
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditDefaultsOnly, Category = "View")
	FVector2D ViewPitchAngle = FVector2D(-40, 30);

private:
	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(VisibleAnywhere)
	class UPoseableMeshComponent* PoseableMesh;

public:
	ACAttachment_Bow();

public:
	void OnBeginEquip_Implementation() override;
	void OnUnequip_Implementation() override;

protected:
	void BeginPlay() override;

public:
	void Tick(float DeltaTime) override;

//public:
//	float* GetAnimInstance_Bending();

private:
	FVector2D OriginViewPitchAngle;
};
