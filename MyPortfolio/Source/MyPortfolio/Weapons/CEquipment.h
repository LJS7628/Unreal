#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CWeaponStructures.h"
#include "CEquipment.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEquipmentBeginEquip);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEquipmentUnequip);

UCLASS()
class MYPORTFOLIO_API UCEquipment : public UObject
{
	GENERATED_BODY()

private:
	friend class UCAnimNotifyState_Equip;
	friend class UCBTTaskNode_Equip;

public:
	FORCEINLINE const bool* GetEquipped() { return &bEquipped; }
	FORCEINLINE bool GetBeginEquip() { return bBeginEquip; }

public:
	void BeginPlay(class ACharacter* InOwner, const FEquipmentData& InData);

public:
	UFUNCTION(BlueprintNativeEvent)
	void Equip();
	void Equip_Implementation();

protected:
	UFUNCTION(BlueprintNativeEvent)
	void Begin_Equip();
	void Begin_Equip_Implementation();

	UFUNCTION(BlueprintNativeEvent)
	void End_Equip();
	void End_Equip_Implementation();

public:
	UFUNCTION(BlueprintNativeEvent)
	void Unequip();
	void Unequip_Implementation();


public:
	FEquipmentBeginEquip OnEquipmentBeginEquip;
	FEquipmentUnequip OnEquipmentUnequip;


private:
	class ACharacter* OwnerCharacter;

private:
	FEquipmentData Data;

private:
	class UCStateComponent* State;
	class UCMovementComponent* Movement;

private:
	bool bEquipped;
	bool bBeginEquip;
};
