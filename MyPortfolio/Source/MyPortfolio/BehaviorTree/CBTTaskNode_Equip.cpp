#include "../BehaviorTree/CBTTaskNode_Equip.h"
#include "../Global.h"
#include "../Characters/CEnemy_AI.h"
#include "../Characters/CAIController.h"
#include "../Components/CStateComponent.h"
#include "../Weapons/CEquipment.h"

UCBTTaskNode_Equip::UCBTTaskNode_Equip()
{
	NodeName = "Equip";

	bNotifyTick = true;
}

EBTNodeResult::Type UCBTTaskNode_Equip::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	ACAIController* controller = Cast<ACAIController>(OwnerComp.GetOwner());
	ACEnemy_AI* ai = Cast<ACEnemy_AI>(controller->GetPawn());

	UCWeaponComponent* weapon = CHelpers::GetComponent<UCWeaponComponent>(ai);
	CheckNullResult(weapon, EBTNodeResult::Failed);
	CheckTrueResult(Type == EWeaponType::Max, EBTNodeResult::Failed);
	CheckTrueResult(Type == weapon->GetCurrentType(), EBTNodeResult::Succeeded);

	switch (Type)
	{
	case EWeaponType::Sword: weapon->SetSwordMode(); break;
	case EWeaponType::Bow: weapon->SetBowMode(); break;
	case EWeaponType::Warp: weapon->SetWarpMode(); break;

	default:
		return EBTNodeResult::Failed;
	}

	return EBTNodeResult::InProgress;
}

void UCBTTaskNode_Equip::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	ACAIController* controller = Cast<ACAIController>(OwnerComp.GetOwner());
	ACEnemy_AI* ai = Cast<ACEnemy_AI>(controller->GetPawn());

	UCWeaponComponent* weapon = CHelpers::GetComponent<UCWeaponComponent>(ai);
	UCEquipment* equipment = weapon->GetEquipment();
	CheckNull(equipment);

	bool bEquipped = *equipment->GetEquipped();

	UCStateComponent* state = CHelpers::GetComponent<UCStateComponent>(ai);


	if (bEquipped && state->IsIdleMode())
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
}

EBTNodeResult::Type UCBTTaskNode_Equip::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::AbortTask(OwnerComp, NodeMemory);

	ACAIController* controller = Cast<ACAIController>(OwnerComp.GetOwner());
	ACEnemy_AI* ai = Cast<ACEnemy_AI>(controller->GetPawn());

	UCWeaponComponent* weapon = CHelpers::GetComponent<UCWeaponComponent>(ai);
	bool bBeginEquip = weapon->GetEquipment()->GetBeginEquip();

	if (bBeginEquip == false)
		weapon->GetEquipment()->Begin_Equip();

	weapon->GetEquipment()->End_Equip();

	return EBTNodeResult::Aborted;
}


