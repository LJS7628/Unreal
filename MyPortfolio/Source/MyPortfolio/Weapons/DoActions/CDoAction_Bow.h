#pragma once

#include "CoreMinimal.h"
#include "../../Weapons/CDoAction.h"
#include "CDoAction_Bow.generated.h"


UCLASS(Blueprintable)
class MYPORTFOLIO_API UCDoAction_Bow : public UCDoAction
{
	GENERATED_BODY()
	
private:
	friend class UCAnimNotify_BeginAction;
	friend class UCAnimNotify_EndAction;

public:
	UCDoAction_Bow();

	void BeginPlay
	(
		class ACharacter* InOwner,
		const TArray<FDoActionData>& InDoActionDatas,
		const TArray<FHitData>& InHitDatas
	) override;

	void Tick(float InDeltaTime) override;

public:
	void DoAction() override;

protected:
	void Begin_DoAction() override;
	void End_DoAction() override;
};
