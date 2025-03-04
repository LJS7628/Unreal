#include "../../Weapons/DoActions/CDoAction_Bow.h"
#include "../../Global.h"
#include "GameFramework/Character.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/PoseableMeshComponent.h"
#include "../../Components/CStateComponent.h"

#include "../../Weapons/CAttachment.h"
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
}



void UCDoAction_Bow::Tick(float InDeltaTime)
{
	Super::Tick(InDeltaTime);

	CheckFalse(*bEquipped);

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

	ACArrow* arrow = GetAttachedArrow();
	arrow->DetachFromActor(FDetachmentTransformRules(EDetachmentRule::KeepWorld, true));

	arrow->OnEndPlay.AddDynamic(this, &UCDoAction_Bow::OnArrowEndPlay);

	//화살 궤적을 만드는 곳 :: 수정해야함 
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
}

void UCDoAction_Bow::CreateArrow()
{
	CheckTrue(World->bIsTearingDown);
	CheckNull(ArrowClass);

	FTransform transform;
	ACArrow* arrow = World->SpawnActorDeferred<ACArrow>(ArrowClass, transform, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	CheckNull(arrow);

	arrow->AddIgnoreActor(OwnerCharacter);

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

void UCDoAction_Bow::OnArrowEndPlay(ACArrow* InDestroyer)
{
	Arrows.Remove(InDestroyer);
}
