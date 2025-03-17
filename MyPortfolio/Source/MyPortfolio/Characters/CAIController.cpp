#include "../Characters/CAIController.h"
#include "../Global.h"

#include "GameFramework/Character.h"
#include "../Characters/CEnemy_AI.h"
#include "Perception/AIPerceptionComponent.h" //AI감지 컴포넌트
#include "Perception/AISenseConfig_Sight.h"// 시야 구성 : 감지 
#include "BehaviorTree/BehaviorTree.h" // BT

ACAIController::ACAIController()
{
	CHelpers::CreateActorComponent<UAIPerceptionComponent>(this, &Perception, "Perception");

	Sight = CreateDefaultSubobject<UAISenseConfig_Sight>("Sight");
	Sight->SightRadius = 500;   //시야 반경
	Sight->LoseSightRadius = 600; //감지를 잃을 반경
	Sight->PeripheralVisionAngleDegrees = 45; //시야 각도 (반각 기준 : 실제 90도)
	Sight->SetMaxAge(2); // 감지를 잃을 시간

	Sight->DetectionByAffiliation.bDetectEnemies = true; //적군 감지
	Sight->DetectionByAffiliation.bDetectNeutrals = false; //중립 감지
	Sight->DetectionByAffiliation.bDetectFriendlies = false;//아군 감지

	//AI 감각 설정 : 시야 우선순위 
	Perception->ConfigureSense(*Sight);
	Perception->SetDominantSense(*Sight->GetSenseImplementation());
}


void ACAIController::BeginPlay() 
{
	Super::BeginPlay();


}

void ACAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	//팀번호 세팅
	Enemy = Cast<ACEnemy_AI>(InPawn);
	SetGenericTeamId(Enemy->GetTeamID());

	CheckNull(Enemy->GetBehaviorTree());

	//BT 실행
	RunBehaviorTree(Enemy->GetBehaviorTree());
}

void ACAIController::OnUnPossess() 
{
	Super::OnUnPossess();
}