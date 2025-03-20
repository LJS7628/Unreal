#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CAIBehaviorComponent.generated.h"

UENUM(BlueprintType)
enum class EAIStateType : uint8
{
	Wait = 0, Patrol, Equip, Approach, Action, Damaged, Avoid, Max,
};
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIStateTypeChanged, EAIStateType, InPrevType, EAIStateType, InNewType);

UCLASS()
class MYPORTFOLIO_API UCAIBehaviorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	FORCEINLINE void SetBlackboard(class UBlackboardComponent* InBlackboard) { Blackboard = InBlackboard; }

private:
	UPROPERTY(EditAnyWhere, Category = "BlackBoard Key")
	FName AIStateTypeKey = "State";

	UPROPERTY(EditAnyWhere, Category = "BlackBoard Key")
	FName TargetKey = "Target";

	UPROPERTY(EditAnyWhere, Category = "BlackBoard Key")
	FName PatrolLocationKey = "Patrol";

	UPROPERTY(EditAnyWhere, Category = "BlackBoard Key")
	FName DodgeLocationKey = "Dodge";

public:	
	UCAIBehaviorComponent();

private:
	EAIStateType GetType();

public:
	bool IsWaitMode();
	bool IsEquipMode();
	bool IsApproachMode();
	bool IsActionMode();
	bool IsPatrolMode();
	bool IsDamagedMode();
	bool IsAvoidMode();

	void SetWaitMode();
	void SetEquipMode();
	void SetApproachMode();
	void SetActionMode();
	void SetPatrolMode();
	void SetDamagedMode();
	void SetAvoidMode();

public:
	class ACharacter* GetTarget();

public:
	FVector GetPatrolLocation();
	void SetPatrolLocation(const FVector& InLocation);

public:
	FVector GetDodgeLocation();

private:
	void ChangeType(EAIStateType InType);

public:
	FAIStateTypeChanged OnAIStateTypeChanged;

private:
	class UBlackboardComponent* Blackboard;


		
};
