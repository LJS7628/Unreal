#include "../Weapons/CWeaponStructures.h"
#include "../Global.h"

#include "GameFramework/Character.h"
#include "../Components/CMovementComponent.h"

void FDoActionData::DoAction(ACharacter* InOwner)
{
	UCMovementComponent* movement = CHelpers::GetComponent<UCMovementComponent>(InOwner);

	if (!!movement)
	{
		if (bCanMove == false)
			movement->Stop();
	}

	if (!!Montage)
		InOwner->PlayAnimMontage(Montage, PlayRate);
}