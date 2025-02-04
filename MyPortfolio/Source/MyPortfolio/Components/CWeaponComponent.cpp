#include "../Components/CWeaponComponent.h"
#include "../Global.h"
#include "GameFramework/Character.h"
#include "../Weapons/CWeaponAsset.h"

UCWeaponComponent::UCWeaponComponent()
{

	PrimaryComponentTick.bCanEverTick = true;

}


void UCWeaponComponent::BeginPlay()
{
	Super::BeginPlay();
	
	OwnerCharacter = Cast<ACharacter>(GetOwner());

	for (int i = 0; i < DataAssets.Num(); i++) 
	{
		if (DataAssets[i] == NULL)
			continue;

		DataAssets[i]->BeginPlay(OwnerCharacter);
	}
}


void UCWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

