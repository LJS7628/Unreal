#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CWeaponStructures.h"
#include "CDoAction.generated.h"


UCLASS(NotBlueprintable)
class MYPORTFOLIO_API UCDoAction : public UObject
{
	GENERATED_BODY()
	
public:
	UCDoAction();

	void BeginPlay(class ACharacter* InOwner,const TArray<FDoActionData>& InDoActionDatas);

public:
	virtual void DoAction();
	virtual void Begin_DoAction();
	virtual void End_DoAction();

protected:
	class ACharacter* OwnerCharacter;
	class UWorld* World;

	class UCMovementComponent* Movement;
	class UCStateComponent* State;

	TArray<FDoActionData> DoActionDatas;
};
