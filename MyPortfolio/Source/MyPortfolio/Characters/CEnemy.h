#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
//#include "../Interfaces/IStatable.h"
#include "CEnemy.generated.h"

UCLASS()
class MYPORTFOLIO_API ACEnemy : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
	class UCMovementComponent* Movement;

protected:
	UPROPERTY(VisibleAnywhere)
	class UCStateComponent* State;

public:
	ACEnemy();

protected:
	virtual void BeginPlay() override;

};
