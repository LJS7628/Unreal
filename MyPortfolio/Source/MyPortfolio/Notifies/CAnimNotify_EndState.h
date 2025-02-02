#pragma once

#include "CoreMinimal.h"
#include "../Components/CStateComponent.h" //���� ���� ������Ʈ
#include "Animation/AnimNotifies/AnimNotify.h"
#include "CAnimNotify_EndState.generated.h"



UCLASS()
class MYPORTFOLIO_API UCAnimNotify_EndState : public UAnimNotify
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	EStateType StateType;
	
private:
	FString GetNotifyName_Implementation() const override;
	void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
};
