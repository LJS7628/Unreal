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
	EStateType prevType = currentType; //���� ���� ����
	currentType = InType; //�ٲٷ��� Ÿ���� ���� Ÿ�Կ� ����


	if (OnStateTypeChanged.IsBound()) //�Լ��� ���ε� �Ǿ��ִ��� üũ
		OnStateTypeChanged.Broadcast(prevType, InType);  //���ε� �� �Լ� ȣ�� �� ����

}

