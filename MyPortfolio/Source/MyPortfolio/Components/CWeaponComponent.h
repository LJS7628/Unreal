#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Weapons/CWeaponStructures.h" //웨폰 구조체
#include "CWeaponComponent.generated.h"

//타입 변경에 대한 델리게이트
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponTypeChanged, EWeaponType, InPrevType, EWeaponType, InNewType);

UCLASS( )
class MYPORTFOLIO_API UCWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	//데이터 에셋
	UPROPERTY(EditAnywhere, Category = "DataAsset");
	TArray<class UCWeaponAsset*> DataAssets;

public:
	//무기 해제 상태 체크
	FORCEINLINE bool IsUnarmedMode() { return Current == EWeaponType::Max; }

public:	
	UCWeaponComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	//기본 상태 체크
	bool IsIdleMode();

public:
	// 무기 에셋 가져오기, 무기 부착하기
	class UCWeaponAsset* GetWeaponAsset(EWeaponType InType);
	class ACAttachment* GetAttachment();

public:
	//부착된 무기 장착, 공격
	class UCEquipment* GetEquipment();
	class UCDoAction* GetDoAction();

public:
	//무기 해제, 검 모드 
	void SetUnarmedMode();
	void SetSwordMode();

private:
	//모드 세팅, 타입 변경 알림
	void SetMode(EWeaponType InType);
	void ChangeType(EWeaponType InType);


public:
	//공격
	void DoAction();

public:
	FWeaponTypeChanged OnWeaponTypeChanged;

private:
	class ACharacter* OwnerCharacter;

private:
	EWeaponType Current = EWeaponType::Max;
		
};
