#include "../BehaviorTree/CBTTask_Print.h"
#include "../Global.h"
#include "../Characters/CAIController.h"
#include "../Characters/CEnemy_AI.h"

UCBTTask_Print::UCBTTask_Print()
{
	NodeName = "Print";

	bNotifyTick = true; //TickTask를 실행시키기 위함
}

EBTNodeResult::Type UCBTTask_Print::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	//OwnerComp => BP_CAIController_Melee
	ACAIController* controller = Cast<ACAIController>(OwnerComp.GetOwner());
	ACEnemy_AI* ai = Cast<ACEnemy_AI>(controller->GetPawn());

	CLog::Print(ai->GetName());

	return EBTNodeResult::InProgress;
}

EBTNodeResult::Type UCBTTask_Print::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::AbortTask(OwnerComp, NodeMemory);

	return EBTNodeResult::Type();
}

void UCBTTask_Print::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	TotalTime += DeltaSeconds;

	if (TotalTime >= FinishTime)
		FinishLatentTask(OwnerComp, FinishType);
}
