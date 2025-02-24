#include "../../Weapons/Attachments/CAttachment_Bow.h"
#include "../../Global.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/PoseableMeshComponent.h"

ACAttachment_Bow::ACAttachment_Bow()
{
	PrimaryActorTick.bCanEverTick = true;

	CHelpers::CreateComponent<USkeletalMeshComponent>(this, &SkeletalMesh, "SkeletalMesh", Root);
	CHelpers::CreateComponent<UPoseableMeshComponent>(this, &PoseableMesh, "PoseableMesh", Root);

	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "/Script/Engine.SkeletalMesh'/Game/Characters/Weapons/Bow/SK_ElvenBow.SK_ElvenBow'");
	SkeletalMesh->SetSkeletalMesh(mesh);

	//TSubclassOf<UCAnimInstance_Bow> animInstance;
	//CHelpers::GetClass<UCAnimInstance_Bow>(&animInstance, "/Script/Engine.AnimBlueprint'/Game/Weapons/Bow/ABP_Bow.ABP_Bow_C'");
	//SkeletalMesh->SetAnimInstanceClass(animInstance);
}

void ACAttachment_Bow::OnBeginEquip_Implementation()
{
	Super::OnBeginEquip_Implementation();

	AttachTo("Hand_Bow_Left");

	APlayerController* controller = OwnerCharacter->GetController<APlayerController>();
	CheckNull(controller);

	OriginViewPitchAngle.X = controller->PlayerCameraManager->ViewPitchMin; 
	OriginViewPitchAngle.Y = controller->PlayerCameraManager->ViewPitchMax; 

	controller->PlayerCameraManager->ViewPitchMin = ViewPitchAngle.X; //-40
	controller->PlayerCameraManager->ViewPitchMax = ViewPitchAngle.Y; //30
}

void ACAttachment_Bow::OnUnequip_Implementation()
{
	Super::OnUnequip_Implementation();

	AttachTo("Holster_Bow");

	APlayerController* controller = OwnerCharacter->GetController<APlayerController>();
	CheckNull(controller);

	controller->PlayerCameraManager->ViewPitchMin = OriginViewPitchAngle.X;
	controller->PlayerCameraManager->ViewPitchMax = OriginViewPitchAngle.Y;
}

void ACAttachment_Bow::BeginPlay()
{
	Super::BeginPlay();

	AttachTo("Holster_Bow");

	SkeletalMesh->SetVisibility(false);

	PoseableMesh->SetSkeletalMesh(SkeletalMesh->SkeletalMesh);
	PoseableMesh->CopyPoseFromSkeletalComponent(SkeletalMesh);
}

void ACAttachment_Bow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//float* ACAttachment_Bow::GetAnimInstance_Bending()
//{
//	UCAnimInstance_Bow* bow = Cast<UCAnimInstance_Bow>(SkeletalMesh->GetAnimInstance());
//	CheckNullResult(bow, nullptr);
//
//	return bow->GetBending();
//}