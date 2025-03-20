#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "CBTTask_Print.generated.h"

//BT ���ظ� ���� �ۼ��� c++Ŭ���� (���߿� �׽�Ʈ������ ��ȯ�� ����?)
UCLASS()
class MYPORTFOLIO_API UCBTTask_Print : public UBTTaskNode
{
	GENERATED_BODY()

private:
	//UEnum()���� ����ȭ �Ǿ� �ִ��� �˾����� �����δ� �ȵǴ� �� ����
	//TEumAsByte�� ���� ����ȭ 
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
