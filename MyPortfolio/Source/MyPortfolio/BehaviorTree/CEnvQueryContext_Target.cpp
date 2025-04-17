#include "../BehaviorTree/CEnvQueryContext_Target.h"
#include "../Global.h"
#include "../Characters/CEnemy_AI.h"
#include "../Components/CAIBehaviorComponent.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
#include "EnvironmentQuery/EnvQueryTypes.h"


void UCEnvQueryContext_Target::ProvideContext(FEnvQueryInstance& QueryInstance, FEnvQueryContextData& ContextData) const
{
	Super::ProvideContext(QueryInstance, ContextData);

	ACEnemy_AI* ai = Cast<ACEnemy_AI>(QueryInstance.Owner.Get());
	UCAIBehaviorComponent* behavior = CHelpers::GetComponent<UCAIBehaviorComponent>(ai->GetController());

	UEnvQueryItemType_Actor::SetContextHelper(ContextData, behavior->GetTarget());

}