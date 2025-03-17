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
	UPROPERTY(EditDefaultsOnly, Category = "Team")
	class UBehaviorTree* BehaviorTree;

private:
	UPROPERTY(VisibleAnywhere)
	class UCWeaponComponent* Weapon;

public:
	// ����ȣ, BT ��������
	FORCEINLINE uint8 GetTeamID() { return TeamID; }
	FORCEINLINE class UBehaviorTree* GetBehaviorTree() { return BehaviorTree; }

public:
	ACEnemy_AI();

protected:
	void Dead() override;
};
