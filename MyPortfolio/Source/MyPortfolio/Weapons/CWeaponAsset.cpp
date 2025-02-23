#include "../Weapons/CWeaponAsset.h"
#include "../Global.h"
#include "GameFramework/Character.h"
#include "CAttachment.h"
#include "CEquipment.h"
#include "CDoAction.h"

UCWeaponAsset::UCWeaponAsset()
{
	AttachmentClass = ACAttachment::StaticClass();
	EquipmentClass = UCEquipment::StaticClass();
}

void UCWeaponAsset::BeginPlay(ACharacter* InOwner)
{
	if (!!AttachmentClass)
	{
		FActorSpawnParameters parms;
		parms.Owner = InOwner;

		Attachment=InOwner->GetWorld()->SpawnActor<ACAttachment>(AttachmentClass, parms);
	}

	if (!!EquipmentClass) 
	{
		Equipment = NewObject<UCEquipment>(this, EquipmentClass);
		Equipment->BeginPlay(InOwner, EquipmentData);

		if (!!Attachment) 
		{
			Equipment->OnEquipmentBeginEquip.AddDynamic(Attachment, &ACAttachment::OnBeginEquip);
			Equipment->OnEquipmentUnequip.AddDynamic(Attachment, &ACAttachment::OnUnequip);
		}

	}

	if (!!DoActionClass) 
	{
		DoAction = NewObject<UCDoAction>(this, DoActionClass);
		DoAction->BeginPlay(InOwner, DoActionDatas,HitDatas);

		if (!!Attachment) 
		{
			Attachment->OnAttachmentBeginCollision.AddDynamic(DoAction, &UCDoAction::OnAttachmentBeginCollision);
			Attachment->OnAttachmentEndCollision.AddDynamic(DoAction, &UCDoAction::OnAttachmentEndCollision);

			Attachment->OnAttachmentBeginOverlap.AddDynamic(DoAction, &UCDoAction::OnAttachmentBeginOverlap);
			Attachment->OnAttachmentEndOverlap.AddDynamic(DoAction, &UCDoAction::OnAttachmentEndOverlap);
		}
	}
}
