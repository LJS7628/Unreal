#include "../Components/CWeaponComponent.h"
#include "../Global.h"
#include "GameFramework/Character.h" // ĳ����
#include "CStateComponent.h" //���� ������Ʈ
#include "../Weapons/CEquipment.h" //����
#include "../Weapons/CDoAction.h" // �׼� ���
#include "../Weapons/CSubAction.h"// ���� �׼� ���
#include "../Weapons/CWeaponAsset.h" //���� ����
#include "../Weapons/CWeaponData.h" //���� ���� ������

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

		// ���⺰ BeginPlay ����
		UCWeaponData* data = nullptr;
		DataAssets[i]->BeginPlay(OwnerCharacter, &data);

		Datas.Add(data);
	}
}


void UCWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	for (int i = 0; i < Datas.Num(); i++) 
	{
		if (Datas[i] == NULL)
			continue;

		UCDoAction* doAction = Datas[i]->GetDoAction();

		// ���⺰ doAction Tick ȣ��
		if(!!doAction)
			doAction->Tick(DeltaTime);
		
		UCSubAction* subAction = Datas[i]->GetSubAction();

		// Ȱ ���� �׼� ȣ��
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
UCWeaponData* UCWeaponComponent::GetWeaponData(EWeaponType InType)
{
	for (UCWeaponData* data : Datas)
	{
		if (InType == data->GetWeaponType())
			return data;
	}

	return nullptr;
}

// ���� ����
ACAttachment* UCWeaponComponent::GetAttachment()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);

	UCWeaponData* data = GetWeaponData(Current);
	CheckNullResult(data, nullptr);

	return data->GetAttachment();
}

// ����
UCEquipment* UCWeaponComponent::GetEquipment()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);

	UCWeaponData* data = GetWeaponData(Current);
	CheckNullResult(data, nullptr);

	return data->GetEquipment();
}

//���¿� ���� DoAction ����
UCDoAction* UCWeaponComponent::GetDoAction()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);

	UCWeaponData* data = GetWeaponData(Current);
	CheckNullResult(data, nullptr);

	return data->GetDoAction();
}

// ����׼� ��������
UCSubAction* UCWeaponComponent::GetSubAction()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);

	UCWeaponData* data = GetWeaponData(Current);
	CheckNullResult(data, nullptr);

	return data->GetSubAction();
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

	UCWeaponData* data = GetWeaponData(InType);

	if (!!data) 
	{
		data->GetEquipment()->Equip(); //���� ����
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

// Ȱ �� ��� ������ ��
void UCWeaponComponent::SubAction_Pressed()
{
	UCSubAction* subAction = GetSubAction();

	if (!!subAction)
		subAction->Pressed();
}

// Ȱ �� ��� ���� ��
void UCWeaponComponent::SubAction_Released()
{
	UCSubAction* subAction = GetSubAction();

	if (!!subAction)
		subAction->Released();
}




