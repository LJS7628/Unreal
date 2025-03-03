#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Weapons/CWeaponStructures.h" //���� ����ü
#include "CWeaponComponent.generated.h"

//Ÿ�� ���濡 ���� ��������Ʈ
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponTypeChanged, EWeaponType, InPrevType, EWeaponType, InNewType);

UCLASS( )
class MYPORTFOLIO_API UCWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	//������ ����
	UPROPERTY(EditAnywhere, Category = "DataAsset");
	TArray<class UCWeaponAsset*> DataAssets;

public:
	//���� ���� ���� üũ
	FORCEINLINE bool IsUnarmedMode() { return Current == EWeaponType::Max; }

public:	
	UCWeaponComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	//�⺻ ���� üũ
	bool IsIdleMode();

private:
	// ���� ���� ��������
	class UCWeaponAsset* GetWeaponAsset(EWeaponType InType);

public:
	//���� ����, ����, ����
	class UCEquipment* GetEquipment();
	class ACAttachment* GetAttachment();
	class UCDoAction* GetDoAction();
	class UCSubAction* GetSubAction();

public:
	//���� ���
	void SetUnarmedMode();
	void SetFistMode();
	void SetSwordMode();
	void SetAxeMode();
	void SetBowMode();

private:
	//��� ����, Ÿ�� ���� �˸�
	void SetMode(EWeaponType InType);
	void ChangeType(EWeaponType InType);


public:
	//����
	void DoAction();

public:
	void SubAction_Pressed();
	void SubAction_Released();

public:
	FWeaponTypeChanged OnWeaponTypeChanged;

private:
	class ACharacter* OwnerCharacter;

private:
	EWeaponType Current = EWeaponType::Max;
		
};
