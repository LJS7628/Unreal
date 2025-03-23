#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPatrolPath.generated.h"

UCLASS()
class MYPORTFOLIO_API ACPatrolPath : public AActor
{
	GENERATED_BODY()
	
private:
	//경로 반복
	UPROPERTY(EditAnywhere, Category = "Path")
	bool bLoop;

	//경로 포인트
	UPROPERTY(EditAnywhere, Category = "Path")
	int32 Index;

	// 역행
	UPROPERTY(EditAnywhere, Category = "Path")
	bool bReverse;

private:
	//
	UPROPERTY(VisibleAnywhere)
	class USceneComponent* Root;

	//곡선
	UPROPERTY(VisibleAnywhere)
	class USplineComponent* Spline;

	//
	UPROPERTY(VisibleAnywhere)
	class UTextRenderComponent* Text;

public:
	ACPatrolPath();
	void OnConstruction(const FTransform& Transform) override;

public:
	FVector GetMoveTo();
	void UpdateIndex();

};
