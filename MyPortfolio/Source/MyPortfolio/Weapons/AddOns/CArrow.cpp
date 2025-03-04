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
	Capsule->OnComponentHit.AddDynamic(this, &ACArrow::OnComponentHit);

	Projectile->SetActive(false);
}

void ACArrow::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (OnEndPlay.IsBound())
		OnEndPlay.Broadcast(this);
}

void ACArrow::Shoot(const FVector& InForward)
{
	Projectile->Velocity = InForward * Projectile->InitialSpeed;
	Projectile->SetActive(true);

	FTimerHandle handle;
	FTimerDelegate timerDelegate = FTimerDelegate::CreateLambda([&]()
		{
			Capsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		});

	GetWorld()->GetTimerManager().SetTimer(handle, timerDelegate, 0.1f, false);

}

void ACArrow::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	SetLifeSpan(LifeSpanAfterCollision);

	for (AActor* actor : Ignores)
		CheckTrue(actor == OtherActor);


	Capsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	//ACharacter* character = Cast<ACharacter>(OtherActor);
	//if (!!character && OnHit.IsBound())
	//	OnHit.Broadcast(this, character);
}



