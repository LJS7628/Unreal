#pragma once

#include "CoreMinimal.h"
#include "../CDoAction.h"
#include "CDoAction_Combo.generated.h"


UCLASS()
class MYPORTFOLIO_API UCDoAction_Combo : public UCDoAction
{
	GENERATED_BODY()
	
public:
	FORCEINLINE void EnableCombo() { bEnable = true; }
	FORCEINLINE void DisableCombo() { bEnable = false; }

public:
	void DoAction() override;
	void Begin_DoAction() override;
	void End_DoAction() override;

private:
	int32 Index;

private:
	bool bEnable;
	bool bExist;
};
