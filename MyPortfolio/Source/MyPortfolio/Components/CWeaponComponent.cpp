#include "../Components/CWeaponComponent.h"
#include "../Global.h"
#include "GameFramework/Character.h" // 캐릭터
#include "CStateComponent.h" //상태 컴포넌트
#include "../Weapons/CEquipment.h" //장착
#include "../Weapons/CDoAction.h" // 액션 헤더
#include "../Weapons/CSubAction.h"// 서브 액션 헤더
#include "../Weapons/CWeaponAsset.h" //웨폰 에셋

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

// Idle모드 체크
bool UCWeaponComponent::IsIdleMode()
{
	return CHelpers::GetComponent<UCStateComponent>(OwnerCharacter)->IsIdleMode();
}

//무기 에셋 가져오기
UCWeaponAsset* UCWeaponComponent::GetWeaponAsset(EWeaponType InType)
{
	for (UCWeaponAsset* asset : DataAssets)
	{
		if (InType == asset->GetWeaponType())
			return asset;
	}

	return nullptr;
}

// 무기 부착
ACAttachment* UCWeaponComponent::GetAttachment()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);

	UCWeaponAsset* asset = GetWeaponAsset(Current);
	CheckNullResult(asset, nullptr);

	return asset->GetAttachment();
}

// 장착
UCEquipment* UCWeaponComponent::GetEquipment()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);

	UCWeaponAsset* asset = GetWeaponAsset(Current);
	CheckNullResult(asset, nullptr);

	return asset->GetEquipment();
}

//에셋에 따른 DoAction 실행
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

// Unarmed 모드
void UCWeaponComponent::SetUnarmedMode()
{
	GetEquipment()->Unequip();

	ChangeType(EWeaponType::Max);
}

// Fist 모드
void UCWeaponComponent::SetFistMode()
{
	CheckFalse(IsIdleMode());

	SetMode(EWeaponType::Fist);
}

// Sword 모드
void UCWeaponComponent::SetSwordMode()
{
	CheckFalse(IsIdleMode());

	SetMode(EWeaponType::Sword);
}

// Axe 모드
void UCWeaponComponent::SetAxeMode()
{
	CheckFalse(IsIdleMode());

	SetMode(EWeaponType::Axe);
}

// Bow 모드
void UCWeaponComponent::SetBowMode()
{
	CheckFalse(IsIdleMode());

	SetMode(EWeaponType::Bow);
}

//Warp 모드
void UCWeaponComponent::SetWarpMode()
{
	CheckFalse(IsIdleMode());

	SetMode(EWeaponType::Warp);
}

// 모드 설정
void UCWeaponComponent::SetMode(EWeaponType InType)
{
	//바꿀 타입이 동일하면 해제
	if (Current == InType) 
	{
		SetUnarmedMode();

		return;
	}

	// 장착 무기 해제
	else if (IsUnarmedMode() == false) 
	{
		GetEquipment()->Unequip();
	}

	UCWeaponAsset* asset = GetWeaponAsset(InType);

	if (!!asset) 
	{
		asset->GetEquipment()->Equip(); //무기 장착
		ChangeType(InType); // 상태 변화
	}
}

//상태 변화
void UCWeaponComponent::ChangeType(EWeaponType InType)
{
	EWeaponType prevType = Current;
	Current = InType;

	if (OnWeaponTypeChanged.IsBound())
		OnWeaponTypeChanged.Broadcast(prevType, InType);
}

//액션 시작
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




