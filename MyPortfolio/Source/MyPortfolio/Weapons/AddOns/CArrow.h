#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CArrow.generated.h"

UCLASS()
class MYPORTFOLIO_API ACArrow : public AActor
{
	GENERATED_BODY()
	

private:
	UPROPERTY(VisibleAnywhere)
	class UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere)
	class UProjectileMovementComponent* Projectile;

public:	
	ACArrow();

protected:
	virtual void BeginPlay() override;



};
