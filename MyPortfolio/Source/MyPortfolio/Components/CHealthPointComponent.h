#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CHealthPointComponent.generated.h"

// 데미지 처리 델리게이트
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHealthPointChanged, float, InCurrentHealth, float, InMaxHealth);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPORTFOLIO_API UCHealthPointComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	// 체력 수치
	UPROPERTY(EditAnywhere, Category = "Health")
	float MaxHealth = 100;

public:
	//사망 판단
	FORCEINLINE bool IsDead() { return Health <= 0.0f; }

	//최대체력, 현재체력 가져오기 
	FORCEINLINE float GetHealth() { return Health; }
	FORCEINLINE float GetAAMaxHealth() { return MaxHealth; }

public:
	UCHealthPointComponent();

protected:
	virtual void BeginPlay() override;

public:
	//데미지 처리
	void Damage(float InAmount);

public:
	FHealthPointChanged OnHealthPointChanged;

private:
	float Health;

		
};
