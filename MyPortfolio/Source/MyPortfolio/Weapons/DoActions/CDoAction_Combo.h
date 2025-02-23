#pragma once

#include "CoreMinimal.h"
#include "../CDoAction.h"
#include "CDoAction_Combo.generated.h"


UCLASS(Blueprintable)
class MYPORTFOLIO_API UCDoAction_Combo : public UCDoAction
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "Angle")
	float FinishAngle = 1.0f;

	UPROPERTY(EditAnywhere, Category = "Angle")
	float RotationSpeed = 25.0f;

	UPROPERTY(EditAnywhere, Category = "Angle")
	float AvailableAngle = 0.75f;

public:
	FORCEINLINE void EnableCombo() { bEnable = true; }
	FORCEINLINE void DisableCombo() { bEnable = false; }

public:
	void DoAction() override;
	void Begin_DoAction() override;
	void End_DoAction() override;

public:
	void Tick(float InDeltaTime) override;

public:
	void OnAttachmentEndCollision() override;
	void OnAttachmentBeginOverlap(class ACharacter* InAttacker, AActor* InAttackCauser, class ACharacter* InOther) override;
	
private:
	int32 Index;

private:
	bool bEnable;
	bool bExist;

private:
	TArray<class ACharacter*> Hitted;

private:
	class ACharacter* Candidate;
};
