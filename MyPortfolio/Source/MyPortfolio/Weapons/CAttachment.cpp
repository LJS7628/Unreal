
#include "../Weapons/CAttachment.h"
#include "../Global.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Character.h"

ACAttachment::ACAttachment()
{
	CHelpers::CreateComponent<USceneComponent>(this, &Root, "Root");
}

void ACAttachment::BeginPlay()
{
	ownerCharacter = Cast<ACharacter>(GetOwner());

	Super::BeginPlay();
	
}

void ACAttachment::AttachTo(FName InSocketName)
{
	AttachToComponent(ownerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), InSocketName);
}


