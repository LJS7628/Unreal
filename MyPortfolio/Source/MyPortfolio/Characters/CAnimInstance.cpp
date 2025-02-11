#include "../Characters/CAnimInstance.h"
#include "../Global.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"  //ĳ���� �̵� ���� Component

#include "../Characters/CPlayer.h" //�÷��̾� 
#include "../Components/CWeaponComponent.h" //����

void UCAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	OwnerCharacter = Cast<ACharacter>(TryGetPawnOwner());
	CheckNull(OwnerCharacter);

	Weapon = CHelpers::GetComponent<UCWeaponComponent>(OwnerCharacter);
	CheckNull(Weapon);

	//���º�ȭ�� ��������Ʈ�� ����
	Weapon->OnWeaponTypeChanged.AddDynamic(this, &UCAnimInstance::OnWeaponTypeChanged);
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

void UCAnimInstance::OnWeaponTypeChanged(EWeaponType InPrevType, EWeaponType InNewType)
{
	WeaponType = InNewType;
}
