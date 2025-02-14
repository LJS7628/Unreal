#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "../Interfaces/IStatable.h"
#include "CEnemy.generated.h"

UCLASS()
class MYPORTFOLIO_API ACEnemy : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = "Montages")
	class UAnimMontage* DeadMontage;

	UPROPERTY(EditAnywhere, Category = "Montages")
	float DeadMontage_PlayRate = 1.0f;

private:
	UPROPERTY(VisibleAnywhere)
	class UCMovementComponent* Movement;

protected:
	UPROPERTY(VisibleAnywhere)
	class UCStateComponent* State;

private:
	UPROPERTY(VisibleAnywhere)
	class UCHealthPointComponent* HealthPoint;

public:
	ACEnemy();

protected:
	virtual void BeginPlay() override;

public:
	float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);

private:
	UFUNCTION()
	void OnStateTypeChanged(EStateType InPrevType, EStateType InNewType);

private:
	void Damaged();
	void Dead();
	

private:
	struct FDamageData 
	{
		float Power;
		class ACharacter* Attacker;
		class AActor* Causer;

		const struct FActionDamageEvent* Event;
	}DamageData;
};
