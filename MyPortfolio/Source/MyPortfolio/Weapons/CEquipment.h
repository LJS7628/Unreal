#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CWeaponStructures.h"
#include "CEquipment.generated.h"

UCLASS()
class MYPORTFOLIO_API UCEquipment : public UObject
{
	GENERATED_BODY()

public:
	void BeginPlay(class ACharacter* InOwner, const FEquipmentData& InData);

private:
	class ACharacter* OwnerCharacter;

private:
	FEquipmentData Data;
};
