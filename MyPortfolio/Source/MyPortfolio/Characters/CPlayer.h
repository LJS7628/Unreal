#pragma once

#include "CoreMinimal.h"
#include "../Interfaces/IStatable.h" // ���� �������̽�
#include "GameFramework/Character.h"
#include "CPlayer.generated.h"

UCLASS()
class MYPORTFOLIO_API ACPlayer 
	: public ACharacter
	, public IIStatable

{
	GENERATED_BODY()

//ī�޶�
private:
	UPROPERTY(VisibleAnywhere)
	class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* Camera;

//������Ʈ
private:
	UPROPERTY(VisibleAnywhere)
	class UCStateComponent* State;

	UPROPERTY(VisibleAnywhere)
	class UCMovementComponent* Movement;

private:
	void OnJump();
	void OnEvade();

private:
	void OnZoom(float InAxisValue);

public:
	ACPlayer();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	//CStateComponent delegate ���� �Լ�
	UFUNCTION()
	void OnStateTypeChanged(EStateType InPrevType, EStateType InNewType);

public:
	void  End_Backstep() override;

};
