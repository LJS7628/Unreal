#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CAttachment.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAttachmentBeginCollision);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAttachmentEndCollision);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAttachmentBeginOverlap, class ACharacter*, InAttacker, AActor*, InAttackCauser, class ACharacter*, InOther);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttachmentEndOverlap, class ACharacter*, InAttacker, class ACharacter*, InOther);

UCLASS()
class MYPORTFOLIO_API ACAttachment : public AActor
{
	GENERATED_BODY()
	
private:
	friend class UCAnimNotifyState_Collision;

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

private:
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:
	void OnCollision();
	void OffCollision();

public:
	FAttachmentBeginOverlap OnAttachmentBeginOverlap;
	FAttachmentEndOverlap OnAttachmentEndOverlap;

protected:
	UFUNCTION(BlueprintCallable, Category = "Attach")
	void AttachTo(FName InSocketName);

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Game")
	class ACharacter* OwnerCharacter;

private:
	TArray<class UShapeComponent*> Collisions;
};
