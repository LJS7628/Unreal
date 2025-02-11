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
	float Speed; //�̵� �ӵ�

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
	float Direction; //�̵� ����

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
	float Pitch; //���� ����

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
	bool bFalling; //���� ���� ���� üũ

protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Weapon")
	EWeaponType WeaponType = EWeaponType::Max; //NULL ������ �ʱ�ȭ

public:
	void NativeBeginPlay() override;
	void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	UFUNCTION()
	//Ÿ�� ��ȭ�� �˷���
	void OnWeaponTypeChanged(EWeaponType InPrevType, EWeaponType InNewType);

private:
	class ACharacter* OwnerCharacter;

private:
	class UCWeaponComponent* Weapon;

	FRotator PrevRotation; 
	
};
