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

public:
	// ���� ���� ��������, ���� �����ϱ�
	class UCWeaponAsset* GetWeaponAsset(EWeaponType InType);
	class ACAttachment* GetAttachment();

public:
	//������ ���� ����, ����
	class UCEquipment* GetEquipment();
	class UCDoAction* GetDoAction();

public:
	//���� ����, �� ��� 
	void SetUnarmedMode();
	void SetSwordMode();

private:
	//��� ����, Ÿ�� ���� �˸�
	void SetMode(EWeaponType InType);
	void ChangeType(EWeaponType InType);


public:
	//����
	void DoAction();

public:
	FWeaponTypeChanged OnWeaponTypeChanged;

private:
	class ACharacter* OwnerCharacter;

private:
	EWeaponType Current = EWeaponType::Max;
		
};
