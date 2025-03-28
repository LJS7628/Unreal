#include "../BehaviorTree/CBTTaskNode_Damaged.h"
#include "../Global.h"
#include "../Characters/CEnemy_AI.h"
#include "../Characters/CAIController.h"
#include "../Components/CStateComponent.h"

UCBTTaskNode_Damaged::UCBTTaskNode_Damaged()
{
	NodeName = "Damaged";

	bNotifyTick = true;
}

EBTNodeResult::Type UCBTTaskNode_Damaged::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	ACAIController* controller = Cast<ACAIController>(OwnerComp.GetOwner());

	controller->StopMovement();

	return EBTNodeResult::InProgress;
}

void UCBTTaskNode_Damaged::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	ACAIController* controller = Cast<ACAIController>(OwnerComp.GetOwner());
	ACEnemy_AI* ai = Cast<ACEnemy_AI>(controller->GetPawn());

	UCStateComponent* state = CHelpers::GetComponent<UCStateComponent>(ai);

	if (state->IsDamagedMode() == false)
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
}

