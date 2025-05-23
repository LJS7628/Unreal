// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Service/BTService_SelectBehaviorBoss.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/DS1Enemy.h"
#include "Components/DS1AttributeComponent.h"

void UBTService_SelectBehaviorBoss::UpdateBehavior(UBlackboardComponent* BlackboardComp, ADS1Enemy* ControlledEnemy) const
{
	check(BlackboardComp);
	check(ControlledEnemy);

	AActor* TargetActor = Cast<AActor>(BlackboardComp->GetValueAsObject(TargetKey.SelectedKeyName));

	// Ÿ���� ������
	if (IsValid(TargetActor))
	{

		if (UDS1AttributeComponent* AttributeComponent = ControlledEnemy->GetComponentByClass<UDS1AttributeComponent>())
		{
			// ���׹̳��� �����ϸ�.
			if (AttributeComponent->GetBaseStamina() <= StaminaCheckValue)
			{
				SetBehaviorKey(BlackboardComp, EDS1AIBehavior::Strafe);
			}
			else
			{
				const float Distance = TargetActor->GetDistanceTo(ControlledEnemy);

				// ���ݹ��� �����̸�
				if (Distance <= AttackRangeDistance)
				{
					SetBehaviorKey(BlackboardComp, EDS1AIBehavior::MeleeAttack);
				}
				else
				{
					SetBehaviorKey(BlackboardComp, EDS1AIBehavior::Approach);
				}
			}
		}
	}
	else
	{
		SetBehaviorKey(BlackboardComp, EDS1AIBehavior::Idle);
	}
}
