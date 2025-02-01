#include "../Components/CStateComponent.h"
#include "../Global.h"

UCStateComponent::UCStateComponent()
{

}

void UCStateComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UCStateComponent::SetIdleMode()
{
	ChangeType(EStateType::Idle);
}

void UCStateComponent::SetEvadeMode()
{
	ChangeType(EStateType::Idle);
}

void UCStateComponent::SetEquipMode()
{
	ChangeType(EStateType::Idle);
}

void UCStateComponent::SetDamagedMode()
{
	ChangeType(EStateType::Idle);
}

void UCStateComponent::SetActionMode()
{
	ChangeType(EStateType::Idle);
}

void UCStateComponent::SetDeadMode()
{
	ChangeType(EStateType::Idle);
}

void UCStateComponent::ChangeType(EStateType InType)
{
	EStateType prevType = currentType; //이전 상태 저장
	currentType = InType; //바꾸려는 타입을 현재 타입에 저장


	if (OnStateTypeChanged.IsBound()) //함수에 바인딩 되어있는지 체크
		OnStateTypeChanged.Broadcast(prevType, InType);  //바인딩 된 함수 호출 및 실행

}

