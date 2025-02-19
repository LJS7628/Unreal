#include "../Notifies/CAnimNotify_CameraShake.h"
#include "../Global.h"
#include "Camera/CameraShakeBase.h"


FString UCAnimNotify_CameraShake::GetNotifyName_Implementation() const
{
	return "CameraShake";
}

void UCAnimNotify_CameraShake::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);
	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());
	CheckNull(CameraShakeClass);

	APlayerCameraManager* cameraManager = UGameplayStatics::GetPlayerCameraManager(MeshComp->GetOwner()->GetWorld(), 0);
	CheckNull(cameraManager);

	cameraManager->StartCameraShake(CameraShakeClass);
}