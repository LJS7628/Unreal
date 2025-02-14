#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CHealthPointComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHealthPointChanged, float, InCurrentHealth, float, InMaxHealth);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPORTFOLIO_API UCHealthPointComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = "Health")
	float MaxHealth = 500;

public:
	FORCEINLINE bool IsDead() { return Health <= 0.0f; }

	FORCEINLINE float GetHealth() { return Health; }
	FORCEINLINE float GetAAMaxHealth() { return MaxHealth; }

public:
	UCHealthPointComponent();

protected:
	virtual void BeginPlay() override;

public:
	void Damage(float InAmount);

public:
	FHealthPointChanged OnHealthPointChanged;

private:
	float Health;

		
};
