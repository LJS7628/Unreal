#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "../Interfaces/IStatable.h"
#include "CEnemy.generated.h"

UCLASS()
class MYPORTFOLIO_API ACEnemy : 
	public ACharacter
	,public IIStatable //���� �������̽� ���
{
	GENERATED_BODY()

private:
	// ��� ��Ÿ��
	UPROPERTY(EditAnywhere, Category = "Montages")
	class UAnimMontage* DeadMontage;

	// �ִϸ��̼� �ӵ�
	UPROPERTY(EditAnywhere, Category = "Montages")
	float DeadMontage_PlayRate = 1.0f;

private:
	// ������ ������Ʈ
	UPROPERTY(VisibleAnywhere)
	class UCMovementComponent* Movement;

protected:
	// ���� ������Ʈ
	UPROPERTY(VisibleAnywhere)
	class UCStateComponent* State;

private:
	// ü�� ������Ʈ
	UPROPERTY(VisibleAnywhere)
	class UCHealthPointComponent* HealthPoint;

public:
	ACEnemy();

protected:
	virtual void BeginPlay() override;

public:
	// �ǰ� ������ ó��
	float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);

private:
	//���� ��ȭ
	UFUNCTION()
	void OnStateTypeChanged(EStateType InPrevType, EStateType InNewType);

private:
	//�ǰ�, ���ó�� 
	void Damaged();
	void Dead();
	
public:
	// ��� ���� ����
	void End_Dead() override;

private:
	// ������ ���� ����ü (���ط�,������, ����, ������ �̺�Ʈ)
	struct FDamageData 
	{
		float Power;
		class ACharacter* Attacker;
		class AActor* Causer;

		const struct FActionDamageEvent* Event;
	}DamageData;
};
