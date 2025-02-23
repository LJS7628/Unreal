#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CWeaponStructures.h"
#include "CDoAction.generated.h"


UCLASS(NotBlueprintable)
class MYPORTFOLIO_API UCDoAction : public UObject
{
	GENERATED_BODY()
	
private:
	friend class UCAnimNotify_BeginAction;
	friend class UCAnimNotify_EndAction;

public:
	UCDoAction();

	void BeginPlay(class ACharacter* InOwner,const TArray<FDoActionData>& InDoActionDatas, const TArray<FHitData>& InHitDatas);

public:
	virtual void DoAction();

protected:
	virtual void Begin_DoAction();
	virtual void End_DoAction();

public:
	UFUNCTION()
	virtual void OnAttachmentBeginCollision() {}

	UFUNCTION()
	virtual void OnAttachmentEndCollision() {}

	UFUNCTION()
	virtual void OnAttachmentBeginOverlap(class ACharacter* InAttacker, AActor* InAttackCauser, class ACharacter* InOther) {}

	UFUNCTION()
	virtual void OnAttachmentEndOverlap(class ACharacter* InAttacker, class ACharacter* InOther) {}

protected:
	class ACharacter* OwnerCharacter;
	class UWorld* World;

	class UCMovementComponent* Movement;
	class UCStateComponent* State;

	TArray<FDoActionData> DoActionDatas;
	TArray<FHitData> HitDatas;
};
