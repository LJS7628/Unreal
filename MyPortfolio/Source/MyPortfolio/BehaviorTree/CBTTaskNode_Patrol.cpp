#include "../BehaviorTree/CBTTaskNode_Patrol.h"
#include "../Global.h"
#include "../Components/CAIBehaviorComponent.h"
#include "../Characters/CEnemy_AI.h"
#include "../Characters/CAIController.h"
#include "NavigationSystem.h"
#include "Navigation/PathFollowingComponent.h"
#include "CPatrolPath.h"

UCBTTaskNode_Patrol::UCBTTaskNode_Patrol()
{
	NodeName = "Patrol";

	bNotifyTick = true;
}

EBTNodeResult::Type UCBTTaskNode_Patrol::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	ACAIController* controller = Cast<ACAIController>(OwnerComp.GetOwner());
	UCAIBehaviorComponent* behavior = CHelpers::GetComponent<UCAIBehaviorComponent>(controller);

	ACEnemy_AI* ai = Cast<ACEnemy_AI>(controller->GetPawn());

	ACPatrolPath* path = ai->GetPatrolPath();
	if (!!path)
	{
		FVector moveToPoint = ai->GetPatrolPath()->GetMoveTo();
		behavior->SetPatrolLocation(moveToPoint);

		if (bDebug)
		{
			DrawDebugSphere(ai->GetWorld(), moveToPoint, 10, 40, FColor::Red, false, 60);
		}


		return EBTNodeResult::InProgress;
	}


	FVector location = ai->GetActorLocation();
	UNavigationSystemV1* navigation = FNavigationSystem::GetCurrent<UNavigationSystemV1>(ai->GetWorld());
	CheckNullResult(navigation, EBTNodeResult::Failed);


	FNavLocation point(location);

	while (true)
	{
		if (navigation->GetRandomPointInNavigableRadius(location, RandomRadius, point))
			break;
	}

	behavior->SetPatrolLocation(point.Location);

	if (bDebug)
		DrawDebugSphere(ai->GetWorld(), point.Location, 10, 40, FColor::Red, false, 60);

	return EBTNodeResult::InProgress;
}

void UCBTTaskNode_Patrol::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	ACAIController* controller = Cast<ACAIController>(OwnerComp.GetOwner());
	UCAIBehaviorComponent* behavior = CHelpers::GetComponent<UCAIBehaviorComponent>(controller);

	ACEnemy_AI* ai = Cast<ACEnemy_AI>(controller->GetPawn());


	FVector location = behavior->GetPatrolLocation();

	EPathFollowingRequestResult::Type result = controller->MoveToLocation(location, GoalDistance, false);

	switch (result)
	{
		case EPathFollowingRequestResult::Failed:
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Failed);

			break;
		}

		case EPathFollowingRequestResult::AlreadyAtGoal:
		{
			if (!!ai->GetPatrolPath())
				ai->GetPatrolPath()->UpdateIndex();

			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);

			break;
		}
	}
}