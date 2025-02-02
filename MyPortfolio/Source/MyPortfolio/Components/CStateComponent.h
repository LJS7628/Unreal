#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CStateComponent.generated.h"

//상태들을 Enum으로 관리
UENUM()
enum class EStateType : uint8
{
	Idle=0, Evade,Equip,Damaged,Action,Dead,Max,
};

//상태 변화를 알려주는 델리게이트 (이름, 이전상태, 현상태)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateTypeChanged, EStateType, InPrevType, EStateType, InNewType);

UCLASS()
class MYPORTFOLIO_API UCStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Idle State Check 용
	FORCEINLINE bool IsIdleMode() { return currentType == EStateType::Idle; }

public:	

	UCStateComponent();

protected:

	virtual void BeginPlay() override;
		
public:
	void SetIdleMode();
	void SetEvadeMode();
	void SetEquipMode();
	void SetDamagedMode();
	void SetActionMode();
	void SetDeadMode();

private:
	void ChangeType(EStateType InType);

public:
	//상태 변화 델리게이트와 연결할 이벤트 함수
	FStateTypeChanged OnStateTypeChanged;

private:
	EStateType currentType; //현재 타입
};
