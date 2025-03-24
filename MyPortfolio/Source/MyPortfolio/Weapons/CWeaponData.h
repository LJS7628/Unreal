#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CWeaponStructures.h"
#include "CWeaponData.generated.h"


UCLASS()
class MYPORTFOLIO_API UCWeaponData : public UObject
{
	GENERATED_BODY()
	
private:
	friend class UCWeaponAsset;

public:
	FORCEINLINE EWeaponType GetWeaponType() { return WeaponType; }

public:
	FORCEINLINE class ACAttachment* GetAttachment() { return Attachment; }
	FORCEINLINE class UCEquipment* GetEquipment() { return Equipment; }
	FORCEINLINE class UCDoAction* GetDoAction() { return DoAction; }
	FORCEINLINE class UCSubAction* GetSubAction() { return SubAction; }

private:
	UPROPERTY()
	EWeaponType WeaponType = EWeaponType::Max;

	UPROPERTY()
	class ACAttachment* Attachment;

	UPROPERTY()
	class UCEquipment* Equipment;

	UPROPERTY()
	class UCDoAction* DoAction;

	UPROPERTY()
	class UCSubAction* SubAction;
};
