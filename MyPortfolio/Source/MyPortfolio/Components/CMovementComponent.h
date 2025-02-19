#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CMovementComponent.generated.h"


//�̵� ���¸� Enum���� ����
UENUM()
enum class ESpeedType : uint8 
{
	Walk =0, Run, Sprint, Max,
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPORTFOLIO_API UCMovementComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	//�̵� �ӵ�
	UPROPERTY(EditDefaultsOnly, Category = "Speed")
	float Speed[(int32)ESpeedType::Max] = { 200, 400, 600 };

private:
	//Camera ���� �� ������ ���� ��
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	FVector2D PitchAngle = FVector2D(-40, +40);

	//Camera ���콺 ���� ������ ���� ��
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float HorizontalLook = 45;

	//Camera ���콺 ���� ������ ���� ��
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float VerticalLook = 45;

	
private:
	//Evade Montage
	UPROPERTY(EditAnywhere, Category = "Evade")
	class UAnimMontage* BackStepMontage;

	//Evade Animation ����ӵ�
	UPROPERTY(EditAnywhere, Category = "Evade")
	float BackStepMontage_PlayRate=1.25f;

public:	
	UCMovementComponent();

protected:
	virtual void BeginPlay() override;

//�ȱ� �� ī�޶� ���� �Լ�
public:
	void OnMoveForward(float InAxisValue);
	void OnMoveRight(float InAxisValue);
	void OnHorizontalLook(float InAxisValue);
	void OnVerticalLook(float InAxisValue);

//�̵� �ӵ� ���� �Լ�
private:
	void SetSpeed(ESpeedType InType);

//�޸��� �Լ� 
public:
	void OnSprint();
	void OnRun();
	void OnWalk();

public:
//bCanMove Check ��
	FORCEINLINE bool CanMove() { return bCanMove; }

public:
	FORCEINLINE bool GetFixedCamera() { return bFixedCamera; }
	FORCEINLINE void EnableFixedCamera() { bFixedCamera=true; }
	FORCEINLINE void DisableFixedCamera() { bFixedCamera = false; }


//bCanMove ����
public:
	void Move();
	void Stop();
	
public:
	//���� ������ ī�޶� ȸ�� ���
	void EnableControlRotation();
	//���� ������ ī�޶� ȸ�� ��� ����
	void DisenableControlRotation();

public:
	void BackStep();

private:
	class ACharacter* OwnerCharacter;

private:
	bool bCanMove=true; // �̵� ���� ���� üũ
	bool bFixedCamera=false; //���� ī�޶� ��뿩��
};
