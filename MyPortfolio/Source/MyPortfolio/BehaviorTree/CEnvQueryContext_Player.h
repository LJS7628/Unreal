#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "CEnvQueryContext_Player.generated.h"


UCLASS()
class MYPORTFOLIO_API UCEnvQueryContext_Player : public UEnvQueryContext
{
	GENERATED_BODY()
	
private:
	void ProvideContext(FEnvQueryInstance& QueryInstance, FEnvQueryContextData& ContextData) const override;
};
