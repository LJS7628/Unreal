// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Task/BTTask_PerformAttack.h"

#include "AIController.h"
#include "Components/DS1StateComponent.h"
#include "Interfaces/DS1CombatInterface.h"

EBTNodeResult::Type UBTTask_PerformAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    APawn* ControlledPawn = OwnerComp.GetAIOwner()->GetPawn();
    if (!ControlledPawn)
    {
        return EBTNodeResult::Failed;
    }

    if (IDS1CombatInterface* CombatInterface = Cast<IDS1CombatInterface>(ControlledPawn))
    {
        FOnMontageEnded MontageEndedDelegate;
        // ��������Ʈ ���ε�
        MontageEndedDelegate.BindLambda([this, &OwnerComp, ControlledPawn](UAnimMontage* Montage, bool bInterrupted)
            {
                // ��Ÿ�� ���� �� ����� �ڵ�
                UE_LOG(LogTemp, Log, TEXT("Execute MontageEndedDelegate"));

                if (::IsValid(&OwnerComp) == false)
                {
                    return;
                }

                if (UDS1StateComponent* StateComponent = ControlledPawn->GetComponentByClass<UDS1StateComponent>())
                {
                    FGameplayTagContainer CheckTags;
                    CheckTags.AddTag(DS1GameplayTags::Character_State_Parried);
                    CheckTags.AddTag(DS1GameplayTags::Character_State_Stunned);

                    if (StateComponent->IsCurrentStateEqualToAny(CheckTags) == false) 
                    {
                        StateComponent->ClearState();
                    }

                    
                }

                FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
            });

        // Attack ����.
        CombatInterface->PerformAttack(AttackTypeTag, MontageEndedDelegate);

        return EBTNodeResult::InProgress;
    }

    return EBTNodeResult::Failed;
}
