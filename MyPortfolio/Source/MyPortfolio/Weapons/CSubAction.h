#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CSubAction.generated.h"


UCLASS()
class MYPORTFOLIO_API UCSubAction : public UObject
{
	GENERATED_BODY()
	

	FORCEINLINE bool GetInAction() { return bInAction; }

public:
	UCSubAction();

public:
	virtual void BeginPlay(ACharacter* InOwner,class ACAttachment* InAttachment, class UCDoAction* InDoAction);
	virtual void Tick(float InDeltaTime) {}

public:
	virtual void Pressed();
	virtual void Released();

protected:
	bool bInAction;

	class ACharacter* Owner;
	class ACAttachment* Attachment;
	class UCDoAction* DoAction;

	class UCStateComponent* State;
	class UCMovementComponent* Movement;

};
