#pragma once

#include "CoreMinimal.h"
#include "../Characters/CEnemy.h"
#include "CEnemy_AI.generated.h"


UCLASS()
class MYPORTFOLIO_API ACEnemy_AI : public ACEnemy
{
	GENERATED_BODY()
	

private:
	//팀 번호
	UPROPERTY(EditDefaultsOnly, Category = "Team")
	uint8 TeamID = 2;

	// 행동 트리
	UPROPERTY(EditDefaultsOnly, Category = "Team")
	class UBehaviorTree* BehaviorTree;

private:
	UPROPERTY(VisibleAnywhere)
	class UCWeaponComponent* Weapon;

public:
	// 팀번호, BT 가져오기
	FORCEINLINE uint8 GetTeamID() { return TeamID; }
	FORCEINLINE class UBehaviorTree* GetBehaviorTree() { return BehaviorTree; }

public:
	ACEnemy_AI();

protected:
	void Dead() override;
};
