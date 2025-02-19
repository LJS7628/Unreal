#include "../Weapons/CWeaponStructures.h"
#include "../Global.h"

#include "GameFramework/Character.h"
#include "../Components/CMovementComponent.h"

#include "Camera/CameraShakeBase.h" //Camera Shake

void FDoActionData::DoAction(ACharacter* InOwner)
{
	UCMovementComponent* movement = CHelpers::GetComponent<UCMovementComponent>(InOwner);

	if (!!movement)
	{
		if (bFixedCamera)
			movement->EnableFixedCamera();

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

void FHitData::PlayEffect(ACharacter* InCharacter)
{
	CheckNull(InCharacter);
	CheckNull(Effect);

	FVector location = InCharacter->GetActorLocation();
	FRotator rotation = InCharacter->GetActorRotation();

	location += rotation.RotateVector(EffectLocation);

	FTransform transform;
	transform.SetLocation(location);
	transform.SetScale3D(EffectScale);

	CHelpers::PlayEffect(InCharacter->GetWorld(),Effect,transform);
}

void FHitData::PlaySound(ACharacter* InCharacter)
{
	CheckNull(InCharacter);
	CheckNull(Sound);

	UGameplayStatics::SpawnSoundAtLocation(InCharacter->GetWorld(), Sound, InCharacter->GetActorLocation());
}

void FHitData::PlayCameraShake(ACharacter* InCharacter)
{
	CheckNull(InCharacter);
	CheckNull(CameraShake);

	APlayerCameraManager* cameraManager = UGameplayStatics::GetPlayerCameraManager(InCharacter->GetWorld(), 0);
	CheckNull(cameraManager);

	cameraManager->StartCameraShake(CameraShake);

}
