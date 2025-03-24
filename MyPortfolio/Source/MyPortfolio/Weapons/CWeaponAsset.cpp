#include "../Weapons/CWeaponAsset.h"
#include "../Global.h"
#include "GameFramework/Character.h"
#include "CAttachment.h"
#include "CEquipment.h"
#include "CDoAction.h"
#include "CSubAction.h"
#include "CWeaponData.h"
#include "AddOns/CGhostTrail.h"

UCWeaponAsset::UCWeaponAsset()
{
	AttachmentClass = ACAttachment::StaticClass();
	EquipmentClass = UCEquipment::StaticClass();
}

void UCWeaponAsset::BeginPlay(ACharacter* InOwner, UCWeaponData** OutWeaponData)
{
	ACAttachment* attachment = nullptr;
	UCEquipment* equipment = nullptr;
	UCDoAction* doAction = nullptr;
	UCSubAction* subAction = nullptr;

	if (!!AttachmentClass)
	{
		FActorSpawnParameters parms;
		parms.Owner = InOwner;

		attachment=InOwner->GetWorld()->SpawnActor<ACAttachment>(AttachmentClass, parms);
	}

	if (!!EquipmentClass) 
	{
		equipment = NewObject<UCEquipment>(this, EquipmentClass);
		equipment->BeginPlay(InOwner, EquipmentData);

		if (!!attachment) 
		{
			equipment->OnEquipmentBeginEquip.AddDynamic(attachment, &ACAttachment::OnBeginEquip);
			equipment->OnEquipmentUnequip.AddDynamic(attachment, &ACAttachment::OnUnequip);
		}

	}

	if (!!DoActionClass) 
	{
		doAction = NewObject<UCDoAction>(this, DoActionClass);
		doAction->BeginPlay(InOwner, attachment, equipment,DoActionDatas,HitDatas);

		if (!!attachment) 
		{
			attachment->OnAttachmentBeginCollision.AddDynamic(doAction, &UCDoAction::OnAttachmentBeginCollision);
			attachment->OnAttachmentEndCollision.AddDynamic(doAction, &UCDoAction::OnAttachmentEndCollision);

			attachment->OnAttachmentBeginOverlap.AddDynamic(doAction, &UCDoAction::OnAttachmentBeginOverlap);
			attachment->OnAttachmentEndOverlap.AddDynamic(doAction, &UCDoAction::OnAttachmentEndOverlap);
		}

		if (!!equipment) 
		{
			equipment->OnEquipmentBeginEquip.AddDynamic(doAction, &UCDoAction::OnBeginEquip);
			equipment->OnEquipmentUnequip.AddDynamic(doAction, &UCDoAction::OnUnequip);
		}
	}

	if (!!SubActionClass) 
	{
		subAction = NewObject<UCSubAction>(this, SubActionClass);
		subAction->BeginPlay(InOwner, attachment,doAction);

		if (!!equipment) 
		{
			equipment->OnEquipmentUnequip.AddDynamic(subAction, &UCSubAction::OnUnequip);
		}
	}

	*OutWeaponData = NewObject<UCWeaponData>();
	(*OutWeaponData)->WeaponType = WeaponType;
	(*OutWeaponData)->Attachment = attachment;
	(*OutWeaponData)->Equipment = equipment;
	(*OutWeaponData)->DoAction = doAction;
	(*OutWeaponData)->SubAction = subAction;
}
