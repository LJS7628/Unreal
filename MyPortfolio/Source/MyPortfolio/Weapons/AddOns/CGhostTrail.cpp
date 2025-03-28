#include "../../Weapons/AddOns/CGhostTrail.h"
#include "../../Global.h"
#include "GameFramework/Character.h"
#include "Components/PoseableMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialInstanceDynamic.h"

ACGhostTrail::ACGhostTrail()
{
	CHelpers::CreateComponent<UPoseableMeshComponent>(this, &Mesh, "Mesh");

}

void ACGhostTrail::BeginPlay()
{
	Super::BeginPlay();

	OwnerCharacter = Cast<ACharacter>(GetOwner());


	UMaterialInstanceConstant* material;
	CHelpers::GetAssetDynamic<UMaterialInstanceConstant>(&material, "/Script/Engine.MaterialInstanceConstant'/Game/Materials/M_GhostTrail_Inst.M_GhostTrail_Inst'");

	Material = UMaterialInstanceDynamic::Create(material, this);
	Material->SetVectorParameterValue("Color", Color);
	Material->SetScalarParameterValue("Exponent", Exponent);


	Mesh->SetVisibility(false);
	Mesh->SetSkeletalMesh(OwnerCharacter->GetMesh()->SkeletalMesh);
	Mesh->CopyPoseFromSkeletalComponent(OwnerCharacter->GetMesh());
	Mesh->SetRelativeScale3D(Scale);

	for (int i = 0; i < OwnerCharacter->GetMesh()->SkeletalMesh->GetMaterials().Num(); i++)
		Mesh->SetMaterial(i, Material);


	FTimerDelegate timerDelegate;
	timerDelegate.BindLambda([&]()
		{
			if (Mesh->IsVisible() == false)
				Mesh->ToggleVisibility();

			SetActorLocation(OwnerCharacter->GetActorLocation() + FVector(0, 0, -90));
			SetActorRotation(OwnerCharacter->GetActorRotation() + FRotator(0, -90, 0));

			Mesh->CopyPoseFromSkeletalComponent(OwnerCharacter->GetMesh());
		});

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, timerDelegate, Interval, true, StartDelay);
}

void ACGhostTrail::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
}




