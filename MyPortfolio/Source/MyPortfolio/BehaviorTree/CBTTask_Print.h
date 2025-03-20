#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "CBTTask_Print.generated.h"

//BT 이해를 위해 작성한 c++클래스 (나중에 테스트용으로 전환할 수도?)
UCLASS()
class MYPORTFOLIO_API UCBTTask_Print : public UBTTaskNode
{
	GENERATED_BODY()

private:
	//UEnum()으로 직렬화 되어 있는줄 알았지만 실제로는 안되는 거 같음
	//TEumAsByte를 통해 직렬화 
	UPROPERTY(EditAnywhere, Category = "Finish")
	TEnumAsByte<EBTNodeResult::Type> FinishType = EBTNodeResult::Succeeded;

	UPROPERTY(EditAnywhere, Category = "Finish")
	float FinishTime = 1.0f;

public:
	UCBTTask_Print();

private:
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:
	EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

private:
	float TotalTime = 0.0f;
	
};
