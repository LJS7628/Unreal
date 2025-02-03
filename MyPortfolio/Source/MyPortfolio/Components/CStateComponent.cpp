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
	ChangeType(EStateType::Evade);
}

void UCStateComponent::SetEquipMode()
{
	ChangeType(EStateType::Equip);
}

void UCStateComponent::SetDamagedMode()
{
	ChangeType(EStateType::Damaged);
}

void UCStateComponent::SetActionMode()
{
	ChangeType(EStateType::Action);
}

void UCStateComponent::SetDeadMode()
{
	ChangeType(EStateType::Dead);
}

void UCStateComponent::ChangeType(EStateType InType)
{
	EStateType prevType = currentType; //���� ���� ����
	currentType = InType; //�ٲٷ��� Ÿ���� ���� Ÿ�Կ� ����


	if (OnStateTypeChanged.IsBound()) //�Լ��� ���ε� �Ǿ��ִ��� üũ
		OnStateTypeChanged.Broadcast(prevType, InType);  //���ε� �� �Լ� ȣ�� �� ����

}

