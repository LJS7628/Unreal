#pragma once

#include "CoreMinimal.h"
#include "../../Weapons/CDoAction.h"
#include "CDoAction_Bow.generated.h"


UCLASS(Blueprintable)
class MYPORTFOLIO_API UCDoAction_Bow : public UCDoAction
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditDefaultsOnly, Category = "Arrow")
	TSubclassOf<class ACArrow> ArrowClass;

private:
	friend class UCAnimNotify_BeginAction;
	friend class UCAnimNotify_EndAction;

public:
	UCDoAction_Bow();

	void BeginPlay
	(
		class ACharacter* InOwner,
		class ACAttachment* InAttachment,
		class UCEquipment* InEquipment,
		const TArray<FDoActionData>& InDoActionDatas,
		const TArray<FHitData>& InHitDatas
	) override;

	void Tick(float InDeltaTime) override;

public:
	void DoAction() override;

protected:
	void Begin_DoAction() override;
	void End_DoAction() override;

public:
	void OnBeginEquip() override;
	void OnUnequip() override;

private:
	void CreateArrow();
	class ACArrow* GetAttachedArrow();

public:
	void End_BowString();

private:
	UFUNCTION()
	void OnArrowEndPlay(class ACArrow* InDestroyer);

	UFUNCTION()
	void OnArrowHit(class AActor* InCauser, class ACharacter* InOtherCharacter);

private:
	class USkeletalMeshComponent* SkeletalMesh;
	class UPoseableMeshComponent* PoseableMesh;

private:
	const bool*  bEquipped;

private:
	FVector OriginLocation;

private:
	bool bAttachString = true;
	float* Bending;

private:
	TArray<class ACArrow*> Arrows;
};
