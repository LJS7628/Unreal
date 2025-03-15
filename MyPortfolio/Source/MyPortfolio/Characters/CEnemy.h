#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "../Interfaces/IStatable.h"
#include "CEnemy.generated.h"

UCLASS()
class MYPORTFOLIO_API ACEnemy : 
	public ACharacter
	,public IIStatable //상태 인터페이스 상속
{
	GENERATED_BODY()

private:
	// 사망 몽타주
	UPROPERTY(EditAnywhere, Category = "Montages")
	class UAnimMontage* DeadMontage;

	// 애니메이션 속도
	UPROPERTY(EditAnywhere, Category = "Montages")
	float DeadMontage_PlayRate = 1.0f;

private:
	// 움직임 컴포넌트
	UPROPERTY(VisibleAnywhere)
	class UCMovementComponent* Movement;

protected:
	// 상태 컴포넌트
	UPROPERTY(VisibleAnywhere)
	class UCStateComponent* State;

private:
	// 체력 컴포넌트
	UPROPERTY(VisibleAnywhere)
	class UCHealthPointComponent* HealthPoint;

public:
	ACEnemy();

protected:
	virtual void BeginPlay() override;

public:
	// 피격 데미지 처리
	float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);

private:
	//상태 변화
	UFUNCTION()
	void OnStateTypeChanged(EStateType InPrevType, EStateType InNewType);

private:
	//피격, 사망처리 
	void Damaged();
	void Dead();
	
public:
	// 사망 이후 삭제
	void End_Dead() override;

private:
	// 데미지 관련 구조체 (피해량,공격자, 무기, 데미지 이벤트)
	struct FDamageData 
	{
		float Power;
		class ACharacter* Attacker;
		class AActor* Causer;

		const struct FActionDamageEvent* Event;
	}DamageData;
};
