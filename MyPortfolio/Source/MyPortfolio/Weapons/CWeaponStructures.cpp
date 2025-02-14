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

///////////////////////////////////////////////////////////////////////////////////////////////////

void FHitData::SendDamage(ACharacter* InAttacker, AActor* InAttackCauser, ACharacter* InOther)
{
	FActionDamageEvent e;
	e.HitData = this;

	InOther->TakeDamage(Power, e, InAttacker->GetController(), InAttackCauser);

}

void FHitData::PlayHitMotion(ACharacter* InCharacter)
{
	CheckNull(InCharacter);
	CheckNull(Montage);

	InCharacter->PlayAnimMontage(Montage, PlayRate);
}

void FHitData::PlayHitStop(ACharacter* InCharacter)
{
	CheckNull(InCharacter);
	CheckTrue(FMath::IsNearlyZero(StopTime));


	TArray<AActor*> actors;

	TArray<TObjectPtr<AActor>> arr = InCharacter->GetWorld()->GetCurrentLevel()->Actors;
	for (AActor* actor : InCharacter->GetWorld()->GetCurrentLevel()->Actors)
	{
		if (actor == nullptr) continue;


		UMeshComponent* mesh = actor->GetComponentByClass<UMeshComponent>();
		if (mesh == nullptr) continue;

		if (mesh->Mobility == EComponentMobility::Movable)
		{
			actor->CustomTimeDilation = 1e-3f;

			actors.Add(actor);
		}
	}


	FTimerDelegate timerDelegate;
	timerDelegate.BindLambda([=]()
		{
			for (AActor* actor : actors)
			{
				if (!!actor)
					actor->CustomTimeDilation = 1.0f;
			}
		});

	FTimerHandle timerHandle;
	InCharacter->GetWorld()->GetTimerManager().SetTimer(timerHandle, timerDelegate, StopTime, false);
}
