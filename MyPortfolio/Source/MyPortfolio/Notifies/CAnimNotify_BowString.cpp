#include "../Notifies/CAnimNotify_BowString.h"
#include "../Global.h"
#include "../Components/CWeaponComponent.h"
#include "../Weapons/DoActions/CDoAction_Bow.h"

FString UCAnimNotify_BowString::GetNotifyName_Implementation() const
{
	return "BowString";
}

void UCAnimNotify_BowString::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);
	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());

	UCWeaponComponent* weapon = CHelpers::GetComponent<UCWeaponComponent>(MeshComp->GetOwner());
	CheckNull(weapon);

	UCDoAction* doAction = weapon->GetDoAction();
	CheckNull(doAction);

	UCDoAction_Bow* bow = Cast<UCDoAction_Bow>(doAction);
	CheckNull(bow);

	bow->End_BowString();
}