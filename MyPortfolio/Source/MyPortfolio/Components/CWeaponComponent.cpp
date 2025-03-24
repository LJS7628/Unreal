#include "../Components/CWeaponComponent.h"
#include "../Global.h"
#include "GameFramework/Character.h" // 캐릭터
#include "CStateComponent.h" //상태 컴포넌트
#include "../Weapons/CEquipment.h" //장착
#include "../Weapons/CDoAction.h" // 액션 헤더
#include "../Weapons/CSubAction.h"// 서브 액션 헤더
#include "../Weapons/CWeaponAsset.h" //웨폰 에셋
#include "../Weapons/CWeaponData.h" //실제 무기 데이터

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

		// 무기별 BeginPlay 실행
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

		// 무기별 doAction Tick 호출
		if(!!doAction)
			doAction->Tick(DeltaTime);
		
		UCSubAction* subAction = Datas[i]->GetSubAction();

		// 활 서브 액션 호출
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
UCWeaponData* UCWeaponComponent::GetWeaponData(EWeaponType InType)
{
	for (UCWeaponData* data : Datas)
	{
		if (InType == data->GetWeaponType())
			return data;
	}

	return nullptr;
}

// 무기 부착
ACAttachment* UCWeaponComponent::GetAttachment()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);

	UCWeaponData* data = GetWeaponData(Current);
	CheckNullResult(data, nullptr);

	return data->GetAttachment();
}

// 장착
UCEquipment* UCWeaponComponent::GetEquipment()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);

	UCWeaponData* data = GetWeaponData(Current);
	CheckNullResult(data, nullptr);

	return data->GetEquipment();
}

//에셋에 따른 DoAction 실행
UCDoAction* UCWeaponComponent::GetDoAction()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);

	UCWeaponData* data = GetWeaponData(Current);
	CheckNullResult(data, nullptr);

	return data->GetDoAction();
}

// 서브액션 가져오기
UCSubAction* UCWeaponComponent::GetSubAction()
{
	CheckTrueResult(IsUnarmedMode(), nullptr);

	UCWeaponData* data = GetWeaponData(Current);
	CheckNullResult(data, nullptr);

	return data->GetSubAction();
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

	UCWeaponData* data = GetWeaponData(InType);

	if (!!data) 
	{
		data->GetEquipment()->Equip(); //무기 장착
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

// 활 줌 모드 눌렀을 떄
void UCWeaponComponent::SubAction_Pressed()
{
	UCSubAction* subAction = GetSubAction();

	if (!!subAction)
		subAction->Pressed();
}

// 활 줌 모드 뗐을 때
void UCWeaponComponent::SubAction_Released()
{
	UCSubAction* subAction = GetSubAction();

	if (!!subAction)
		subAction->Released();
}




