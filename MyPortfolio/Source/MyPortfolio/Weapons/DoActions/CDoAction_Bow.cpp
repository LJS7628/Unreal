#include "../../Weapons/DoActions/CDoAction_Bow.h"
#include "../../Global.h"
#include "GameFramework/Character.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/PoseableMeshComponent.h"
#include "../../Components/CStateComponent.h"

#include "../../Weapons/Attachments/CAttachment_Bow.h"
#include "../../Weapons/CEquipment.h"

#include "../../Weapons/AddOns/CArrow.h"

UCDoAction_Bow::UCDoAction_Bow()
{
}

void UCDoAction_Bow::BeginPlay(ACharacter* InOwner, ACAttachment* InAttachment, UCEquipment* InEquipment, const TArray<FDoActionData>& InDoActionDatas, const TArray<FHitData>& InHitDatas)
{
	Super::BeginPlay(InOwner,InAttachment,InEquipment, InDoActionDatas, InHitDatas);

	SkeletalMesh = CHelpers::GetComponent<USkeletalMeshComponent>(InAttachment);
	PoseableMesh = CHelpers::GetComponent<UPoseableMeshComponent>(InAttachment);

	bEquipped = InEquipment->GetEquipped();

	OriginLocation = PoseableMesh->GetBoneLocationByName("bow_string_mid", EBoneSpaces::ComponentSpace);

	ACAttachment_Bow* bow = Cast<ACAttachment_Bow>(InAttachment);
	Bending = bow->GetAnimInstance_Bending();
}



void UCDoAction_Bow::Tick(float InDeltaTime)
{
	Super::Tick(InDeltaTime);

	CheckFalse(*bEquipped);
	CheckFalse(bAttachString);

	PoseableMesh->CopyPoseFromSkeletalComponent(SkeletalMesh);

	FVector handLocation = OwnerCharacter->GetMesh()->GetSocketLocation("Hand_Bow_Right");
	PoseableMesh->SetBoneLocationByName("bow_string_mid", handLocation, EBoneSpaces::WorldSpace);
}

void UCDoAction_Bow::DoAction()
{
	CheckFalse(State->IsIdleMode());

	Super::DoAction();

	DoActionDatas[0].DoAction(OwnerCharacter);
}

void UCDoAction_Bow::Begin_DoAction()
{
	Super::Begin_DoAction();

	*Bending = 0.0f;
	bAttachString = false;
	PoseableMesh->SetBoneLocationByName("bow_string_mid", OriginLocation, EBoneSpaces::ComponentSpace);

	ACArrow* arrow = GetAttachedArrow();
	arrow->DetachFromActor(FDetachmentTransformRules(EDetachmentRule::KeepWorld, true));

	
	FVector forward = FQuat(OwnerCharacter->GetControlRotation()).GetForwardVector();

	arrow->Shoot(forward);
}

void UCDoAction_Bow::End_DoAction()
{
	Super::End_DoAction();

	CreateArrow();
}

void UCDoAction_Bow::OnBeginEquip()
{
	Super::OnBeginEquip();

	CreateArrow();
}

void UCDoAction_Bow::OnUnequip()
{
	Super::OnUnequip();

	PoseableMesh->SetBoneLocationByName("bow_string_mid", OriginLocation, EBoneSpaces::ComponentSpace);

	ACArrow* arrow = GetAttachedArrow();

	if (!!arrow) 
		arrow->Destroy();
	
}

void UCDoAction_Bow::CreateArrow()
{
	CheckTrue(World->bIsTearingDown);
	CheckNull(ArrowClass);

	FTransform transform;
	ACArrow* arrow = World->SpawnActorDeferred<ACArrow>(ArrowClass, transform, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	CheckNull(arrow);

	arrow->AddIgnoreActor(OwnerCharacter);
	arrow->OnEndPlay.AddDynamic(this, &UCDoAction_Bow::OnArrowEndPlay);
	arrow->OnHit.AddDynamic(this, &UCDoAction_Bow::OnArrowHit);

	FAttachmentTransformRules rule = FAttachmentTransformRules(EAttachmentRule::KeepRelative, true);
	arrow->AttachToComponent(OwnerCharacter->GetMesh(), rule, "Hand_Bow_Right_Arrow");

	Arrows.Add(arrow);
	UGameplayStatics::FinishSpawningActor(arrow, transform);
}

ACArrow* UCDoAction_Bow::GetAttachedArrow()
{
	for (ACArrow* arrow : Arrows) 
	{
		if (!!arrow->GetAttachParentActor())
			return arrow;
	}


	return nullptr;
}

void UCDoAction_Bow::End_BowString()
{
	bAttachString = true;
	
}

void UCDoAction_Bow::OnArrowEndPlay(ACArrow* InDestroyer)
{
	Arrows.Remove(InDestroyer);
}

void UCDoAction_Bow::OnArrowHit(AActor* InCauser, ACharacter* InOtherCharacter)
{
	CheckFalse(HitDatas.Num() > 0);

	HitDatas[0].SendDamage(OwnerCharacter, InCauser, InOtherCharacter);
}
