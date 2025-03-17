#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "CAIController.generated.h"


UCLASS()
class MYPORTFOLIO_API ACAIController : public AAIController
{
	GENERATED_BODY()
	

private:
	//감지
	UPROPERTY(VisibleAnywhere)
	class UAIPerceptionComponent* Perception;

public:
	ACAIController();

protected:
	virtual void BeginPlay() override;

protected:
	//AI 빙의, 빙의 해제 
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

private:
	class ACEnemy_AI* Enemy;
	//시야 구성 : 감지
	class UAISenseConfig_Sight* Sight;
};
