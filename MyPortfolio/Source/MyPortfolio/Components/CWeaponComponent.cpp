#include "../Components/CWeaponComponent.h"
#include "../Global.h"
#include "GameFramework/Character.h" // ĳ����
#include "CStateComponent.h" //���� ������Ʈ
#include "../Weapons/CEquipment.h" //����
#include "../Weapons/CDoAction.h" // �׼� ���
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

// Unarmed ���
void UCWeaponComponent::SetUnarmedMode()
{
	GetEquipment()->Unequip();

	ChangeType(EWeaponType::Max);
}

// Sword ���
void UCWeaponComponent::SetSwordMode()
{
	CheckFalse(IsIdleMode());

	SetMode(EWeaponType::Sword);
}

void UCWeaponComponent::SetAxeMode()
{
	CheckFalse(IsIdleMode());

	SetMode(EWeaponType::Axe);
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




