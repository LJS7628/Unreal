#include "../Components/CStateComponent.h"
#include "../Global.h"

UCStateComponent::UCStateComponent()
{

}

void UCStateComponent::BeginPlay()
{
	Super::BeginPlay();

}

// Idle ���
void UCStateComponent::SetIdleMode()
{
	ChangeType(EStateType::Idle);
}

// ȸ�� ���
void UCStateComponent::SetEvadeMode()
{
	ChangeType(EStateType::Evade);
}

// ���� ���
void UCStateComponent::SetEquipMode()
{
	ChangeType(EStateType::Equip);
}

// �ǰ� ���
void UCStateComponent::SetDamagedMode()
{
	ChangeType(EStateType::Damaged);
}

// ���� ���
void UCStateComponent::SetActionMode()
{
	ChangeType(EStateType::Action);
}

// ��� ���
void UCStateComponent::SetDeadMode()
{
	ChangeType(EStateType::Dead);
}

// Ÿ�� ���� �˸�
void UCStateComponent::ChangeType(EStateType InType)
{
	EStateType prevType = currentType; //���� ���� ����
	currentType = InType; //�ٲٷ��� Ÿ���� ���� Ÿ�Կ� ����


	if (OnStateTypeChanged.IsBound()) //�Լ��� ���ε� �Ǿ��ִ��� üũ
		OnStateTypeChanged.Broadcast(prevType, InType);  //���ε� �� �Լ� ȣ�� �� ����

}

