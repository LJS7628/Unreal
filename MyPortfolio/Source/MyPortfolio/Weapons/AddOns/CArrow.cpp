#include "../../Weapons/AddOns/CArrow.h"
#include "../../Global.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"


ACArrow::ACArrow()
{
	CHelpers::CreateComponent<UCapsuleComponent>(this, &Capsule, "Capsule");
	CHelpers::CreateActorComponent<UProjectileMovementComponent>(this, &Projectile, "Projectile");

	Capsule->SetCapsuleRadius(8);
	Capsule->SetCapsuleHalfHeight(8);

	Capsule->BodyInstance.bNotifyRigidBodyCollision = true;
	Capsule->SetCollisionProfileName("BlockAll");

	Projectile->ProjectileGravityScale = 0.0f;
}

void ACArrow::BeginPlay()
{
	Super::BeginPlay();
	
	Capsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	Projectile->SetActive(false);
}



