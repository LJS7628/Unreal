#pragma once

#include "CoreMinimal.h"
#include "../Interfaces/IStatable.h" // ���� �������̽�
#include "GenericTeamAgentInterface.h" // ����ȣ �ο� (�Ʊ�,����,�߸� ����)
#include "GameFramework/Character.h"
#include "CPlayer.generated.h"

UCLASS()
class MYPORTFOLIO_API ACPlayer 
	: public ACharacter
	, public IIStatable  //���� �������̽� ���
	, public IGenericTeamAgentInterface //�� ��ȣ

{
	GENERATED_BODY()

//�� ��ȣ
private:
	UPROPERTY(EditDefaultsOnly, Category = "Team")
	uint8 TeamID = 1;

//ī�޶�
private:
	UPROPERTY(VisibleAnywhere)
	class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* Camera;

//������Ʈ
private:
	UPROPERTY(VisibleAnywhere)
	class UCWeaponComponent* Weapon;

	UPROPERTY(VisibleAnywhere)
	class UCStateComponent* State;

	UPROPERTY(VisibleAnywhere)
	class UCMovementComponent* Movement;

// ����,ȸ��
private:
	void OnJump();
	void OnEvade();

// ī�޶� Ȯ��
private:
	void OnZoom(float InAxisValue);


public:
	ACPlayer();

protected:
	virtual void BeginPlay() override;

public:	
	//ĳ���� �Է� ������Ʈ 
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// �� ��ȣ �ο�
	FGenericTeamId GetGenericTeamId() const { return FGenericTeamId(TeamID); }


private:
	//CStateComponent delegate ���� �Լ�
	UFUNCTION()
	void OnStateTypeChanged(EStateType InPrevType, EStateType InNewType);

public:
	//ȸ�� ���� 
	void  End_Backstep() override;

};
