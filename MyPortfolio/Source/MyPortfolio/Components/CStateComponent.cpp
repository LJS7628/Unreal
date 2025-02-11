#include "../Components/CStateComponent.h"
#include "../Global.h"

UCStateComponent::UCStateComponent()
{

}

void UCStateComponent::BeginPlay()
{
	Super::BeginPlay();

}

// Idle 모드
void UCStateComponent::SetIdleMode()
{
	ChangeType(EStateType::Idle);
}

// 회피 모드
void UCStateComponent::SetEvadeMode()
{
	ChangeType(EStateType::Evade);
}

// 장착 모드
void UCStateComponent::SetEquipMode()
{
	ChangeType(EStateType::Equip);
}

// 피격 모드
void UCStateComponent::SetDamagedMode()
{
	ChangeType(EStateType::Damaged);
}

// 공격 모드
void UCStateComponent::SetActionMode()
{
	ChangeType(EStateType::Action);
}

// 사망 모드
void UCStateComponent::SetDeadMode()
{
	ChangeType(EStateType::Dead);
}

// 타입 변경 알림
void UCStateComponent::ChangeType(EStateType InType)
{
	EStateType prevType = currentType; //이전 상태 저장
	currentType = InType; //바꾸려는 타입을 현재 타입에 저장


	if (OnStateTypeChanged.IsBound()) //함수에 바인딩 되어있는지 체크
		OnStateTypeChanged.Broadcast(prevType, InType);  //바인딩 된 함수 호출 및 실행

}

