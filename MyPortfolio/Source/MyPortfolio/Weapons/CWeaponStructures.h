#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CWeaponStructures.generated.h"

//Enum���� ���� ����
UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	Sword, Axe, Max,
};

UCLASS()
class MYPORTFOLIO_API UCWeaponStructures : public UObject
{
	GENERATED_BODY()
	
};
