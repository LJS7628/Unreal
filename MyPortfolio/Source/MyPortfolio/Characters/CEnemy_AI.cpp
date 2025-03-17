#include "../Characters/CEnemy_AI.h"
#include "../Global.h"
#include "../Components/CWeaponComponent.h" // 무기 컴포넌트
#include "BehaviorTree/BehaviorTree.h" //BT 헤더


ACEnemy_AI::ACEnemy_AI()
{
	//웨폰 컴포넌트 생성
	CHelpers::CreateActorComponent<UCWeaponComponent>(this, &Weapon, "Weapon");
}

void ACEnemy_AI::Dead()
{
	Super::Dead();
}
