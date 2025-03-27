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
	UPROPERTY(EditDefaultsOnly, Category = "AI")
	class UBehaviorTree* BehaviorTree;

	// 순찰 경로
	UPROPERTY(EditAnywhere, Category = "AI")
	class ACPatrolPath* PatrolPath;

private:
	UPROPERTY(VisibleAnywhere)
	class UCWeaponComponent* Weapon;

public:
	// 팀번호, BT 가져오기
	FORCEINLINE uint8 GetTeamID() { return TeamID; }
	FORCEINLINE class UBehaviorTree* GetBehaviorTree() { return BehaviorTree; }
	FORCEINLINE class ACPatrolPath* GetPatrolPath() { return PatrolPath; }

public:
	ACEnemy_AI();

protected:
	void Damaged() override;
	
public:
	void End_Damaged() override;

protected:
	void Dead() override;

public:
	void End_Dead() override;

};
