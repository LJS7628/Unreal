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
	// State Check 용
	FORCEINLINE bool IsIdleMode() { return currentType == EStateType::Idle; }
	FORCEINLINE bool IsDamagedMode() { return currentType == EStateType::Damaged; }
	FORCEINLINE bool IsDeadMode() { return currentType == EStateType::Dead; }
	//Sub Action State Check 용
	FORCEINLINE bool IsSubActionMode() { return  bInSubActionMode; }

public:	

	UCStateComponent();

protected:

	virtual void BeginPlay() override;
		
// 모드 설정
public:
	void SetIdleMode();
	void SetEvadeMode();
	void SetEquipMode();
	void SetDamagedMode();
	void SetActionMode();
	void SetDeadMode();

	// 활 줌 모드 On/Off
	void OnSubActionMode();
	void OffSubActionMode();

	//상태 변화
private:
	void ChangeType(EStateType InType);

public:
	//상태 변화 델리게이트와 연결할 이벤트 함수
	FStateTypeChanged OnStateTypeChanged;

private:
	EStateType currentType; //현재 타입

// 줌 모드 체크 
private:
	bool bInSubActionMode;
};
