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

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UCEquipment> EquipmentClass;

	UPROPERTY(EditAnywhere)
	FEquipmentData EquipmentData;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UCDoAction> DoActionClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UCSubAction> SubActionClass;

	UPROPERTY(EditAnywhere)
	TArray<FDoActionData> DoActionDatas;

	UPROPERTY(EditAnywhere)
	TArray<FHitData> HitDatas;

public:
	FORCEINLINE EWeaponType GetWeaponType() { return WeaponType; }

public:
	UCWeaponAsset();

public:
	void BeginPlay(class ACharacter* InOwner, class UCWeaponData** OutWeaponData);
};
