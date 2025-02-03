#pragma once

#include "CoreMinimal.h"
#include "../Interfaces/IStatable.h" // 상태 인터페이스
#include "GameFramework/Character.h"
#include "CPlayer.generated.h"

UCLASS()
class MYPORTFOLIO_API ACPlayer 
	: public ACharacter
	, public IIStatable

{
	GENERATED_BODY()

//카메라
private:
	UPROPERTY(VisibleAnywhere)
	class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* Camera;

//컴포넌트
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
	//CStateComponent delegate 연결 함수
	UFUNCTION()
	void OnStateTypeChanged(EStateType InPrevType, EStateType InNewType);

public:
	void  End_Backstep() override;

};
