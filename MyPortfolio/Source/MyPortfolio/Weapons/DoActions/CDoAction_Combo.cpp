#include "../DoActions/CDoAction_Combo.h"
#include "../../Global.h"
#include "GameFramework/Character.h"

#include "../../Components/CStateComponent.h"
#include "../../Components/CMovementComponent.h"


void UCDoAction_Combo::DoAction()
{
	CheckTrue(DoActionDatas.Num() < 1);

	if (bEnable)
	{
		bEnable = false;
		bExist = true;

		return;
	}

	CheckFalse(State->IsIdleMode());

	Super::DoAction();
	DoActionDatas[Index].DoAction(OwnerCharacter);
}

void UCDoAction_Combo::Begin_DoAction()
{
	Super::Begin_DoAction();
	CheckFalse(bExist);

	bExist = false;
	DoActionDatas[Index].DestoryGhostTrail();
	DoActionDatas[++Index].DoAction(OwnerCharacter);
}

void UCDoAction_Combo::End_DoAction()
{
	Super::End_DoAction();

	DoActionDatas[Index].DestoryGhostTrail();
	Index = 0;
}

void UCDoAction_Combo::Tick(float InDeltaTime)
{
	CheckNull(Candidate);

	APlayerController* controller = OwnerCharacter->GetController<APlayerController>();
	CheckNull(controller);

	FRotator controlRotation = OwnerCharacter->GetControlRotation();
	FRotator ownerToTarget = UKismetMathLibrary::FindLookAtRotation(OwnerCharacter->GetActorLocation(), Candidate->GetActorLocation());

	ownerToTarget.Pitch = controlRotation.Pitch;

	if (controlRotation.Equals(ownerToTarget, FinishAngle)) 
	{
		Candidate = nullptr;
		controller->SetControlRotation(ownerToTarget);

		return;
	}

	FRotator targetRotation = FRotator(controlRotation.Pitch, ownerToTarget.Yaw, ownerToTarget.Roll);
	FRotator result = UKismetMathLibrary::RInterpTo(controlRotation, targetRotation, InDeltaTime, RotationSpeed);

	controller->SetControlRotation(result);
}

void UCDoAction_Combo::OnAttachmentEndCollision()
{
	Super::OnAttachmentEndCollision();

	if (Movement->GetFixedCamera() == false) 
	{
		Hitted.Empty();

		return;
	}

	float angle = -2.0f;


	for (ACharacter* hitted : Hitted) 
	{
		FVector direction = hitted->GetActorLocation() - OwnerCharacter->GetActorLocation();
		direction = direction.GetSafeNormal2D();

		FVector forward = OwnerCharacter->GetActorForwardVector();

		float dot = FVector::DotProduct(direction, forward);

		if (dot < AvailableAngle || dot < angle)
			continue;

		angle = dot;
		Candidate = hitted;
	}

	

	Hitted.Empty();
}

void UCDoAction_Combo::OnAttachmentBeginOverlap(ACharacter* InAttacker, AActor* InAttackCauser, ACharacter* InOther)
{
	Super::OnAttachmentBeginOverlap(InAttacker, InAttackCauser, InOther);

	for (ACharacter* hitted : Hitted)
		CheckTrue(hitted == InOther);

	Hitted.AddUnique(InOther);

	CLog::Log(InOther->GetName());

	CheckTrue(HitDatas.Num() - 1 < Index);
	HitDatas[Index].SendDamage(InAttacker, InAttackCauser, InOther);
}


