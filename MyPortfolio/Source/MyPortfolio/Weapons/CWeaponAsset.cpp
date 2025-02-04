#include "../Weapons/CWeaponAsset.h"
#include "../Global.h"
#include "GameFramework/Character.h"
#include "CAttachment.h"

UCWeaponAsset::UCWeaponAsset()
{
	AttachmentClass = ACAttachment::StaticClass();
}

void UCWeaponAsset::BeginPlay(ACharacter* InOwner)
{
	if (!!AttachmentClass)
	{
		FActorSpawnParameters parms;
		parms.Owner = InOwner;

		Attachment=InOwner->GetWorld()->SpawnActor<ACAttachment>(AttachmentClass, parms);
	}
}
