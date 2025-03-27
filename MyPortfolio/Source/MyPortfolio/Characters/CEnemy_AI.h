#pragma once

#include "CoreMinimal.h"
#include "../Characters/CEnemy.h"
#include "CEnemy_AI.generated.h"


UCLASS()
class MYPORTFOLIO_API ACEnemy_AI : public ACEnemy
{
	GENERATED_BODY()
	

private:
	//�� ��ȣ
	UPROPERTY(EditDefaultsOnly, Category = "Team")
	uint8 TeamID = 2;

	// �ൿ Ʈ��
	UPROPERTY(EditDefaultsOnly, Category = "AI")
	class UBehaviorTree* BehaviorTree;

	// ���� ���
	UPROPERTY(EditAnywhere, Category = "AI")
	class ACPatrolPath* PatrolPath;

private:
	UPROPERTY(VisibleAnywhere)
	class UCWeaponComponent* Weapon;

public:
	// ����ȣ, BT ��������
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
