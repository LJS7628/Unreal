#include "../BehaviorTree/CPatrolPath.h"
#include "../Global.h"
#include "Components/SplineComponent.h"
#include "Components/TextRenderComponent.h"


ACPatrolPath::ACPatrolPath()
{
	bRunConstructionScriptOnDrag = false;

	// 컴포넌트 연결
	CHelpers::CreateComponent<USceneComponent>(this, &Root, "Root");
	CHelpers::CreateComponent<USplineComponent>(this, &Spline, "Spline", Root);
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text", Root);

	// 지면 살짝 위로
	Spline->SetRelativeLocation(FVector(0, 0, 30));

	//텍스트 설정
	Text->SetRelativeLocation(FVector(0, 0, 120));
	Text->SetRelativeRotation(FRotator(0, 180, 0));
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	Text->TextRenderColor = FColor::Red;
	Text->bHiddenInGame = true;

}

//맴버 변수가 변경시 콜이 됨 
void ACPatrolPath::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

#if WITH_EDITOR //에디터 모드에서 사용
	Text->Text = FText::FromString(GetActorLabel());
#endif

	//첫 지점과 마지막 지점 선으로 연결
	Spline->SetClosedLoop(bLoop);
}

FVector ACPatrolPath::GetMoveTo()
{
	//해당 인덱스(스플릿 포인트)로 이동
	return Spline->GetLocationAtSplinePoint(Index, ESplineCoordinateSpace::World);
}

//이동할 다음 포인트 갱신
void ACPatrolPath::UpdateIndex()
{
	//포인트 전체 개수 저장
	int count = Spline->GetNumberOfSplinePoints();

	if (bReverse)
	{
		if (Index > 0)
		{
			Index--;

			return;
		}

		if (Spline->IsClosedLoop())
		{
			Index = count - 1;

			return;
		}

		Index = 1;
		bReverse = false;

		return;
	}


	if (Index < count - 1)
	{
		Index++;

		return;
	}

	if (Spline->IsClosedLoop())
	{
		Index = 0;

		return;
	}

	Index = count - 2;
	bReverse = true;
}

