#include "../Characters/CEnemy_AI.h"
#include "../Global.h"
#include "../Components/CStateComponent.h"
#include "../Components/CWeaponComponent.h" // ���� ������Ʈ
#include "../Weapons/CAttachment.h"
#include "../Components/CAIBehaviorComponent.h"
#include "BehaviorTree/BehaviorTree.h" //BT ���


ACEnemy_AI::ACEnemy_AI()
{
	//���� ������Ʈ ����
	CHelpers::CreateActorComponent<UCWeaponComponent>(this, &Weapon, "Weapon");
}

void ACEnemy_AI::Damaged()
{
	Super::Damaged();
	CheckTrue(State->IsDeadMode());

	UCAIBehaviorComponent* behavior = CHelpers::GetComponent<UCAIBehaviorComponent>(GetController());
	behavior->SetDamagedMode();
}

void ACEnemy_AI::End_Damaged()
{
	Super::End_Damaged();

	UCAIBehaviorComponent* behavior = CHelpers::GetComponent<UCAIBehaviorComponent>(GetController());
	behavior->SetWaitMode();
}

void ACEnemy_AI::Dead()
{
	Super::Dead();
}

void ACEnemy_AI::End_Dead()
{
	Super::End_Dead();

	Destroy();
}
