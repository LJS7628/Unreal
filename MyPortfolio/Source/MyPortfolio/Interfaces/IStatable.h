#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IStatable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIStatable : public UInterface
{
	GENERATED_BODY()
};

class MYPORTFOLIO_API IIStatable
{
	GENERATED_BODY()

//회피 완료 가상 함수	
public:
	virtual void End_Backstep() {};
	virtual void End_Dead() {};
};
