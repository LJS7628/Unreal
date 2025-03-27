#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CStateComponent.generated.h"

//���µ��� Enum���� ����
UENUM()
enum class EStateType : uint8
{
	Idle=0, Evade,Equip,Damaged,Action,Dead,Max,
};

//���� ��ȭ�� �˷��ִ� ��������Ʈ (�̸�, ��������, ������)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateTypeChanged, EStateType, InPrevType, EStateType, InNewType);

UCLASS()
class MYPORTFOLIO_API UCStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// State Check ��
	FORCEINLINE bool IsIdleMode() { return currentType == EStateType::Idle; }
	FORCEINLINE bool IsDamagedMode() { return currentType == EStateType::Damaged; }
	FORCEINLINE bool IsDeadMode() { return currentType == EStateType::Dead; }
	//Sub Action State Check ��
	FORCEINLINE bool IsSubActionMode() { return  bInSubActionMode; }

public:	

	UCStateComponent();

protected:

	virtual void BeginPlay() override;
		
// ��� ����
public:
	void SetIdleMode();
	void SetEvadeMode();
	void SetEquipMode();
	void SetDamagedMode();
	void SetActionMode();
	void SetDeadMode();

	// Ȱ �� ��� On/Off
	void OnSubActionMode();
	void OffSubActionMode();

	//���� ��ȭ
private:
	void ChangeType(EStateType InType);

public:
	//���� ��ȭ ��������Ʈ�� ������ �̺�Ʈ �Լ�
	FStateTypeChanged OnStateTypeChanged;

private:
	EStateType currentType; //���� Ÿ��

// �� ��� üũ 
private:
	bool bInSubActionMode;
};
