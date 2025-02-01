#include "../Characters/CAnimInstance.h"
#include "../Global.h"

#include "../Characters/CPlayer.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"  //ĳ���� �̵� ���� Component

void UCAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	OwnerCharacter = Cast<ACharacter>(TryGetPawnOwner());
	CheckNull(OwnerCharacter);
}

void UCAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	CheckNull(OwnerCharacter);

	Speed = OwnerCharacter->GetVelocity().Size2D();

	FRotator rotator = OwnerCharacter->GetVelocity().ToOrientationRotator(); //�÷��̾� �̵� ����
	FRotator rotator2 = OwnerCharacter->GetControlRotation(); //�÷��̾� �ü� ����
	FRotator target = UKismetMathLibrary::NormalizedDeltaRotator(rotator, rotator2); //�� ���� ���� ���
	PrevRotation = UKismetMathLibrary::RInterpTo(PrevRotation, target, DeltaSeconds, 25); //������ ��������
	Direction = PrevRotation.Yaw; //���� ����

	//���� �� ���
	Pitch = UKismetMathLibrary::FInterpTo(Pitch, OwnerCharacter->GetBaseAimRotation().Pitch, DeltaSeconds, 25);

	//���� ���� üũ
	bFalling = OwnerCharacter->GetCharacterMovement()->IsFalling();
}
