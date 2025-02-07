#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CWeaponStructures.generated.h"

//Enum으로 무기 관리
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

USTRUCT()

struct FDoActionData 
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
	bool bFixedCamera;

public:
	void DoAction(class ACharacter* InOwner);

};

UCLASS()
class MYPORTFOLIO_API UCWeaponStructures : public UObject
{
	GENERATED_BODY()
	
};
