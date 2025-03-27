#include "../Weapons/CEquipment.h"
#include "../Global.h"
#include "GameFramework/Character.h"
#include "../Components/CStateComponent.h"
#include "../Components/CMovementComponent.h"

void UCEquipment::BeginPlay(ACharacter* InOwner, const FEquipmentData& InData)
{
	OwnerCharacter = InOwner;
	Data = InData;

	Movement = CHelpers::GetComponent<UCMovementComponent>(InOwner);
	State = CHelpers::GetComponent<UCStateComponent>(InOwner);
}

void UCEquipment::Equip_Implementation()
{
	State->SetEquipMode();

	if (Data.bCanMove == false)
		Movement->Stop();

	if (Data.bUseControlRotation)
		Movement->EnableControlRotation();

	if (!!Data.Montage)
	{
		OwnerCharacter->PlayAnimMontage(Data.Montage, Data.PlayRate);

		return;
	}

	Begin_Equip();
	End_Equip();
}

void UCEquipment::Begin_Equip_Implementation()
{
	bBeginEquip = true;

	if (OnEquipmentBeginEquip.IsBound())
		OnEquipmentBeginEquip.Broadcast();
}

void UCEquipment::End_Equip_Implementation()
{
	bEquipped = true;
	bBeginEquip = false;

	if(Data.bCanMove == false)
		Movement->Move();

	State->SetIdleMode();
}

void UCEquipment::Unequip_Implementation()
{
	bEquipped = false;

	if (Data.bUseControlRotation)
		Movement->DisenableControlRotation();

	if (OnEquipmentUnequip.IsBound())
		OnEquipmentUnequip.Broadcast();
}


