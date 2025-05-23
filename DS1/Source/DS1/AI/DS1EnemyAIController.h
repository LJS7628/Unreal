// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "DS1EnemyAIController.generated.h"

/**
 * 
 */

class ADS1Enemy;

UCLASS()
class DS1_API ADS1EnemyAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere)
	UBehaviorTree* BehaviorTreeAsset;

	/** AI�� �ֺ�ȯ���� �ν��� �� �ְ� ���ִ� ������Ʈ*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UAIPerceptionComponent* AIPerceptionComponent;

	FTimerHandle TimerHandle;

	UPROPERTY()
	ADS1Enemy* ControlledEnemy;

public:
	ADS1EnemyAIController();

public:
	void StopUpdateTarget();

protected:
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

protected:
	void UpdateTarget() const;
	void SetTarget(AActor* NavTarget) const;
};
