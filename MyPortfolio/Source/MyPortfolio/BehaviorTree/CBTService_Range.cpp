#include "../BehaviorTree/CBTService_Range.h"
#include "../Global.h"
#include "../Characters/CAIController.h"
#include "../Characters/CEnemy_AI.h"
#include "../Components/CAIBehaviorComponent.h"
#include "../Components/CStateComponent.h"

UCBTService_Range::UCBTService_Range()
{
	NodeName = "Range";

	Interval = 0.1f;
	RandomDeviation = 0.0f;
}

void UCBTService_Range::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	ACAIController* controller = Cast<ACAIController>(OwnerComp.GetOwner());
	UCAIBehaviorComponent* behavior = CHelpers::GetComponent<UCAIBehaviorComponent>(controller);

	ACEnemy_AI* ai = Cast<ACEnemy_AI>(controller->GetPawn());


	if (bDrawDebug)
	{
		FVector start = ai->GetActorLocation();
		start.Z -= 25.0f;

		FVector end = start;
		end.Z += 50.0f;

		DrawDebugCylinder(ai->GetWorld(), start, end, DodgeRange, 20, FColor::Red, false, Interval);
	}


	ACharacter* target = behavior->GetTarget();

	if (target == nullptr)
	{
		controller->ClearFocus(EAIFocusPriority::Gameplay);
		behavior->SetWaitMode();

		return;
	}


	controller->SetFocus(target);

	float distance = ai->GetDistanceTo(target);
	if (distance < DodgeRange)
	{
		behavior->SetAvoidMode();

		return;
	}

	behavior->SetActionMode();
}
