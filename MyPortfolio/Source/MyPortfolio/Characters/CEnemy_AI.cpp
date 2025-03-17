#include "../Characters/CEnemy_AI.h"
#include "../Global.h"
#include "../Components/CWeaponComponent.h" // ���� ������Ʈ
#include "BehaviorTree/BehaviorTree.h" //BT ���


ACEnemy_AI::ACEnemy_AI()
{
	//���� ������Ʈ ����
	CHelpers::CreateActorComponent<UCWeaponComponent>(this, &Weapon, "Weapon");
}

void ACEnemy_AI::Dead()
{
	Super::Dead();
}
