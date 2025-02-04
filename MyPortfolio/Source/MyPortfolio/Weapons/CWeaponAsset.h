#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CWeaponStructures.h"
#include "CWeaponAsset.generated.h"

UCLASS()
class MYPORTFOLIO_API UCWeaponAsset : public UDataAsset
{
	GENERATED_BODY()
	
private :
	UPROPERTY(EditAnywhere)
	EWeaponType WeaponType = EWeaponType::Max;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class ACAttachment> AttachmentClass;

public:
	FORCEINLINE EWeaponType GetWeaponType() { return WeaponType; }

public:
	UCWeaponAsset();

public:
	void BeginPlay(class ACharacter* InOwner);

private:
	UPROPERTY()
	class ACAttachment* Attachment;

};
