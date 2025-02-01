#include "../Characters/CAnimInstance.h"
#include "../Global.h"

#include "../Characters/CPlayer.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"  //캐릭터 이동 관리 Component

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

	FRotator rotator = OwnerCharacter->GetVelocity().ToOrientationRotator(); //플레이어 이동 방향
	FRotator rotator2 = OwnerCharacter->GetControlRotation(); //플레이어 시선 방향
	FRotator target = UKismetMathLibrary::NormalizedDeltaRotator(rotator, rotator2); //두 방향 오차 계산
	PrevRotation = UKismetMathLibrary::RInterpTo(PrevRotation, target, DeltaSeconds, 25); //오차를 선형보간
	Direction = PrevRotation.Yaw; //최종 방향

	//조준 시 사용
	Pitch = UKismetMathLibrary::FInterpTo(Pitch, OwnerCharacter->GetBaseAimRotation().Pitch, DeltaSeconds, 25);

	//점프 상태 체크
	bFalling = OwnerCharacter->GetCharacterMovement()->IsFalling();
}
