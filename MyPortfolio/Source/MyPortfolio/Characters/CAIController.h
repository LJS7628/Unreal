#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "CAIController.generated.h"


UCLASS()
class MYPORTFOLIO_API ACAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	//����
	UPROPERTY(VisibleAnywhere)
	class UAIPerceptionComponent* Perception;

	UPROPERTY(VisibleAnywhere)
	class UCAIBehaviorComponent* Behavior;

public:
	ACAIController();

protected:
	virtual void BeginPlay() override;

protected:
	//AI ����, ���� ���� 
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

private:
	UFUNCTION()
	void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);

private:
	class ACEnemy_AI* Enemy;
	//�þ� ���� : ����
	class UAISenseConfig_Sight* Sight;
};
