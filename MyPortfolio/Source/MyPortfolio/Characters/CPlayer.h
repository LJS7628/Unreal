#pragma once

#include "CoreMinimal.h"
#include "../Interfaces/IStatable.h" // 상태 인터페이스
#include "GenericTeamAgentInterface.h" // 팀번호 부여 (아군,적군,중립 구별)
#include "GameFramework/Character.h"
#include "CPlayer.generated.h"

UCLASS()
class MYPORTFOLIO_API ACPlayer 
	: public ACharacter
	, public IIStatable  //상태 인터페이스 상속
	, public IGenericTeamAgentInterface //팀 번호

{
	GENERATED_BODY()

//팀 번호
private:
	UPROPERTY(EditDefaultsOnly, Category = "Team")
	uint8 TeamID = 1;

//카메라
private:
	UPROPERTY(VisibleAnywhere)
	class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* Camera;

//컴포넌트
private:
	UPROPERTY(VisibleAnywhere)
	class UCWeaponComponent* Weapon;

	UPROPERTY(VisibleAnywhere)
	class UCStateComponent* State;

	UPROPERTY(VisibleAnywhere)
	class UCMovementComponent* Movement;

// 점프,회피
private:
	void OnJump();
	void OnEvade();

// 카메라 확대
private:
	void OnZoom(float InAxisValue);


public:
	ACPlayer();

protected:
	virtual void BeginPlay() override;

public:	
	//캐릭터 입력 컴포넌트 
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// 팀 번호 부여
	FGenericTeamId GetGenericTeamId() const { return FGenericTeamId(TeamID); }


private:
	//CStateComponent delegate 연결 함수
	UFUNCTION()
	void OnStateTypeChanged(EStateType InPrevType, EStateType InNewType);

public:
	//회피 종료 
	void  End_Backstep() override;

};
