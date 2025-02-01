#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
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
	float Pitch;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
	bool bFalling;

public:
	void NativeBeginPlay() override;
	void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	class ACharacter* OwnerCharacter;

	FRotator PrevRotation; //
	
};
