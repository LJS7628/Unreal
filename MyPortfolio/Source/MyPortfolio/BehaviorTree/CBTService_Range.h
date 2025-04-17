#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "CBTService_Range.generated.h"


UCLASS()
class MYPORTFOLIO_API UCBTService_Range : public UBTService
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "Action")
	float DodgeRange = 500;

	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bDrawDebug;

public:
	UCBTService_Range();

protected:
	void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
