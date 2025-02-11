#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "../Weapons/CWeaponStructures.h" 
#include "CAnimInstance.generated.h"

UCLASS()
class MYPORTFOLIO_API UCAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
	float Speed; //이동 속도

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
	float Direction; //이동 방향

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
	float Pitch; //조준 각도

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
	bool bFalling; //점프 가능 여부 체크

protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Weapon")
	EWeaponType WeaponType = EWeaponType::Max; //NULL 방지용 초기화

public:
	void NativeBeginPlay() override;
	void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	UFUNCTION()
	//타입 변화를 알려줌
	void OnWeaponTypeChanged(EWeaponType InPrevType, EWeaponType InNewType);

private:
	class ACharacter* OwnerCharacter;

private:
	class UCWeaponComponent* Weapon;

	FRotator PrevRotation; 
	
};
