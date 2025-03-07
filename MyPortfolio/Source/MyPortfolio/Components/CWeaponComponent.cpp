#include "../Components/CWeaponComponent.h"
#include "../Global.h"
#include "GameFramework/Character.h" // ĳ����
#include "CStateComponent.h" //���� ������Ʈ
#include "../Weapons/CEquipment.h" //����
#include "../Weapons/CDoAction.h" // �׼� ���
#include "../Weapons/CSubAction.h"// ���� �׼� ���
#include "../Weapons/CWeaponAsset.h" //���� ����

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

	for (int i = 0; i < DataAssets.Num(); i++) 
	{
		if (DataAssets[i] == NULL)
			continue;

		UCDoAction* doAction = DataAssets[i]->GetDoAction();

		if(!!doAction)
			doAction->Tick(DeltaTime);
		
		UCSubAction* subAction = DataAssets[i]->GetSubAction();

		if (!!subAction)
			subAction->Tick(DeltaTime);

	}


}

// Idle��� üũ
bool UCWeaponComponent::IsIdleMode()
{
	return CHelpers::GetComponent<UCStateComponent>(OwnerCharacter)->IsIdleMode();
}

//���� ���� ��������
UCWeaponAsset* UCWeaponComponent::GetWeaponAsset(EWeaponType InType)
{
	for (UCWeaponAsset* asset : DataAssets)
	{
		if (InType == asset->GetWeaponType())
			return asset;
	}

	return nullptr;
}

// ���� ����
ACAttachment* UCWeaponComponent::GetAttachment()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);

	UCWeaponAsset* asset = GetWeaponAsset(Current);
	CheckNullResult(asset, nullptr);

	return asset->GetAttachment();
}

// ����
UCEquipment* UCWeaponComponent::GetEquipment()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);

	UCWeaponAsset* asset = GetWeaponAsset(Current);
	CheckNullResult(asset, nullptr);

	return asset->GetEquipment();
}

//���¿� ���� DoAction ����
UCDoAction* UCWeaponComponent::GetDoAction()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);

	UCWeaponAsset* asset = GetWeaponAsset(Current);
	CheckNullResult(asset, nullptr);

	return asset->GetDoAction();
}

UCSubAction* UCWeaponComponent::GetSubAction()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);

	UCWeaponAsset* asset = GetWeaponAsset(Current);
	CheckNullResult(asset, nullptr);

	return asset->GetSubAction();
}

// Unarmed ���
void UCWeaponComponent::SetUnarmedMode()
{
	GetEquipment()->Unequip();

	ChangeType(EWeaponType::Max);
}

// Fist ���
void UCWeaponComponent::SetFistMode()
{
	CheckFalse(IsIdleMode());

	SetMode(EWeaponType::Fist);
}

// Sword ���
void UCWeaponComponent::SetSwordMode()
{
	CheckFalse(IsIdleMode());

	SetMode(EWeaponType::Sword);
}

// Axe ���
void UCWeaponComponent::SetAxeMode()
{
	CheckFalse(IsIdleMode());

	SetMode(EWeaponType::Axe);
}

// Bow ���
void UCWeaponComponent::SetBowMode()
{
	CheckFalse(IsIdleMode());

	SetMode(EWeaponType::Bow);
}

//Warp ���
void UCWeaponComponent::SetWarpMode()
{
	CheckFalse(IsIdleMode());

	SetMode(EWeaponType::Warp);
}

// ��� ����
void UCWeaponComponent::SetMode(EWeaponType InType)
{
	//�ٲ� Ÿ���� �����ϸ� ����
	if (Current == InType) 
	{
		SetUnarmedMode();

		return;
	}

	// ���� ���� ����
	else if (IsUnarmedMode() == false) 
	{
		GetEquipment()->Unequip();
	}

	UCWeaponAsset* asset = GetWeaponAsset(InType);

	if (!!asset) 
	{
		asset->GetEquipment()->Equip(); //���� ����
		ChangeType(InType); // ���� ��ȭ
	}
}

//���� ��ȭ
void UCWeaponComponent::ChangeType(EWeaponType InType)
{
	EWeaponType prevType = Current;
	Current = InType;

	if (OnWeaponTypeChanged.IsBound())
		OnWeaponTypeChanged.Broadcast(prevType, InType);
}

//�׼� ����
void UCWeaponComponent::DoAction()
{
	UCDoAction* doAction = GetDoAction();

	if (!!doAction)
		doAction->DoAction();
}

void UCWeaponComponent::SubAction_Pressed()
{
	UCSubAction* subAction = GetSubAction();

	if (!!subAction)
		subAction->Pressed();
}

void UCWeaponComponent::SubAction_Released()
{
	UCSubAction* subAction = GetSubAction();

	if (!!subAction)
		subAction->Released();
}




