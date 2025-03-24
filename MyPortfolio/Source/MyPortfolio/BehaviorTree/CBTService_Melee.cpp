#include "../BehaviorTree/CBTService_Melee.h"
#include "../Global.h"
#include "../Characters/CAIController.h"
#include "../Characters/CEnemy_AI.h"
#include "../Components/CAIBehaviorComponent.h"
#include "../Components/CWeaponComponent.h"
#include "../Weapons/CEquipment.h"

UCBTService_Melee::UCBTService_Melee()
{
	NodeName = "Melee";

	Interval = 0.1f;
	RandomDeviation = 0.0f;
}

void UCBTService_Melee::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	ACAIController* controller = Cast<ACAIController>(OwnerComp.GetOwner());
	UCAIBehaviorComponent* behavior = CHelpers::GetComponent<UCAIBehaviorComponent>(controller);

	ACEnemy_AI* ai = Cast<ACEnemy_AI>(controller->GetPawn());
	UCWeaponComponent* weapon = CHelpers::GetComponent<UCWeaponComponent>(ai);


	ACharacter* target = behavior->GetTarget();

	if (target == nullptr)
	{
		//behavior->SetWaitMode();
		behavior->SetPatrolMode();

		return;
	}

	CheckNull(weapon);

	if (weapon->GetEquipment() == nullptr)  //¹«±â ÀåÂø
	{
		behavior->SetEquipMode();

		return;
	}

	bool bEquipped = *weapon->GetEquipment()->GetEquipped();
	CheckFalse(bEquipped);

	float distance = ai->GetDistanceTo(target);
	if (distance < ActionRange)
	{
		behavior->SetActionMode();

		return;
	}

	behavior->SetApproachMode();
}