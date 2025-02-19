#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CMovementComponent.generated.h"


//이동 상태를 Enum으로 관리
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
	//이동 속도
	UPROPERTY(EditDefaultsOnly, Category = "Speed")
	float Speed[(int32)ESpeedType::Max] = { 200, 400, 600 };

private:
	//Camera 상하 각 제한을 위한 값
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	FVector2D PitchAngle = FVector2D(-40, +40);

	//Camera 마우스 감도 설정을 위한 값
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float HorizontalLook = 45;

	//Camera 마우스 감도 설정을 위한 값
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float VerticalLook = 45;

	
private:
	//Evade Montage
	UPROPERTY(EditAnywhere, Category = "Evade")
	class UAnimMontage* BackStepMontage;

	//Evade Animation 재생속도
	UPROPERTY(EditAnywhere, Category = "Evade")
	float BackStepMontage_PlayRate=1.25f;

public:	
	UCMovementComponent();

protected:
	virtual void BeginPlay() override;

//걷기 및 카메라 관련 함수
public:
	void OnMoveForward(float InAxisValue);
	void OnMoveRight(float InAxisValue);
	void OnHorizontalLook(float InAxisValue);
	void OnVerticalLook(float InAxisValue);

//이동 속도 설정 함수
private:
	void SetSpeed(ESpeedType InType);

//달리기 함수 
public:
	void OnSprint();
	void OnRun();
	void OnWalk();

public:
//bCanMove Check 용
	FORCEINLINE bool CanMove() { return bCanMove; }

public:
	FORCEINLINE bool GetFixedCamera() { return bFixedCamera; }
	FORCEINLINE void EnableFixedCamera() { bFixedCamera=true; }
	FORCEINLINE void DisableFixedCamera() { bFixedCamera = false; }


//bCanMove 설정
public:
	void Move();
	void Stop();
	
public:
	//무기 장착시 카메라 회전 사용
	void EnableControlRotation();
	//무기 해제시 카메라 회전 사용 해제
	void DisenableControlRotation();

public:
	void BackStep();

private:
	class ACharacter* OwnerCharacter;

private:
	bool bCanMove=true; // 이동 가능 여부 체크
	bool bFixedCamera=false; //고정 카메라 사용여부
};
