#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Weapons/CWeaponStructures.h"
#include "CWeaponComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponTypeChanged, EWeaponType, InPrevType, EWeaponType, InNewType);

UCLASS( )
class MYPORTFOLIO_API UCWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = "DataAsset");
	TArray<class UCWeaponAsset*> DataAssets;

public:
	FORCEINLINE bool IsUnarmedMode() { return Current == EWeaponType::Max; }

public:	
	UCWeaponComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	bool IsIdleMode();

public:
	class UCWeaponAsset* GetWeaponAsset(EWeaponType InType);
	class ACAttachment* GetAttachment();
	class UCEquipment* GetEquipment();

public:
	void SetUnarmedMode();
	void SetSwordMode();

private:
	void SetMode(EWeaponType InType);
	void ChangeType(EWeaponType InType);

private:
	class ACharacter* OwnerCharacter;

private:
	EWeaponType Current = EWeaponType::Max;
		
//private:
//	UPROPERTY()
//	TArray<class UCWeaponData*> Datas;
};
