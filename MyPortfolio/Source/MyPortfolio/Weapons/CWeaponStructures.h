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

USTRUCT()
struct FEquipmentData 
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	class UAnimMontage* Montage;

	UPROPERTY(EditAnywhere)
	float PlayRate = 1;

	UPROPERTY(EditAnywhere)
	bool bCanMove = true;

	UPROPERTY(EditAnywhere)
	bool bUseControlRotation = true;

};

UCLASS()
class MYPORTFOLIO_API UCWeaponStructures : public UObject
{
	GENERATED_BODY()
	
};
