#include "../Weapons/CDoAction.h"
#include "../Global.h"

#include "GameFramework/Character.h"

#include "../Components/CStateComponent.h"
#include "../Components/CMovementComponent.h"


UCDoAction::UCDoAction()
{

}

void UCDoAction::BeginPlay(ACharacter* InOwner, ACAttachment* InAttachment, UCEquipment* InEquipment, const TArray<FDoActionData>& InDoActionDatas, const TArray<FHitData>& InHitDatas)
{
	OwnerCharacter = InOwner;
	World = OwnerCharacter->GetWorld();

	State = CHelpers::GetComponent<UCStateComponent>(OwnerCharacter);
	Movement = CHelpers::GetComponent<UCMovementComponent>(OwnerCharacter);

	DoActionDatas = InDoActionDatas;
	HitDatas = InHitDatas;

}

void UCDoAction::DoAction()
{
	State->SetActionMode();
}

void UCDoAction::Begin_DoAction()
{
}

void UCDoAction::End_DoAction()
{
	State->SetIdleMode();

	Movement->Move();
	Movement->DisableFixedCamera();
}
