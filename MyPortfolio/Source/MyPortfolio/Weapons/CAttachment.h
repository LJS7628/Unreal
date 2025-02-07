#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CAttachment.generated.h"

UCLASS()
class MYPORTFOLIO_API ACAttachment : public AActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly,VisibleAnywhere)
	class USceneComponent* Root;

public:	
	ACAttachment();

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintNativeEvent)
	void OnBeginEquip();
	void OnBeginEquip_Implementation() {};

	UFUNCTION(BlueprintNativeEvent)
	void OnUnequip();
	void OnUnequip_Implementation() {};

protected:
	UFUNCTION(BlueprintCallable, Category = "Attach")
	void AttachTo(FName InSocketName);

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Game")
	class ACharacter* ownerCharacter;

};
