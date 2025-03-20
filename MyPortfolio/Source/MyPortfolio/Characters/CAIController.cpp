#include "../Characters/CAIController.h"
#include "../Global.h"

#include "GameFramework/Character.h"
#include "../Characters/CEnemy_AI.h"
#include "Perception/AIPerceptionComponent.h" //AI���� ������Ʈ
#include "Perception/AISenseConfig_Sight.h"// �þ� ���� : ���� 
#include "BehaviorTree/BehaviorTree.h" // BT
#include "BehaviorTree/BlackboardComponent.h" // BlackBoard
#include "../Components/CAIBehaviorComponent.h" //BT Comp

ACAIController::ACAIController()
{
	CHelpers::CreateActorComponent<UAIPerceptionComponent>(this, &Perception, "Perception");
	CHelpers::CreateActorComponent<UCAIBehaviorComponent>(this, &Behavior, "Behavior");

	Sight = CreateDefaultSubobject<UAISenseConfig_Sight>("Sight");
	Sight->SightRadius = 500;   //�þ� �ݰ�
	Sight->LoseSightRadius = 600; //������ ���� �ݰ�
	Sight->PeripheralVisionAngleDegrees = 45; //�þ� ���� (�ݰ� ���� : ���� 90��)
	Sight->SetMaxAge(2); // ������ ���� �ð�

	Sight->DetectionByAffiliation.bDetectEnemies = true; //���� ����
	Sight->DetectionByAffiliation.bDetectNeutrals = false; //�߸� ����
	Sight->DetectionByAffiliation.bDetectFriendlies = false;//�Ʊ� ����

	//AI ���� ���� : �þ� �켱���� 
	Perception->ConfigureSense(*Sight);
	Perception->SetDominantSense(*Sight->GetSenseImplementation());
}


void ACAIController::BeginPlay() 
{
	Super::BeginPlay();

	Perception->OnPerceptionUpdated.AddDynamic(this, &ACAIController::OnPerceptionUpdated);
}

void ACAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	//����ȣ ����
	Enemy = Cast<ACEnemy_AI>(InPawn);
	SetGenericTeamId(Enemy->GetTeamID());

	CheckNull(Enemy->GetBehaviorTree());

	//BT ����
	RunBehaviorTree(Enemy->GetBehaviorTree());

	Behavior->SetBlackboard(Blackboard);
}

void ACAIController::OnUnPossess() 
{
	Super::OnUnPossess();
}

void ACAIController::OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors)
{
	TArray<AActor*> actors;
	//ù ��° �Ķ���Ϳ� nullptr�̶�� �þ߿ܿ� ������ �� actor�� ������ �� 
	// UAISceneConfig_Sight ::StaticClass()�� ���� �þ߷� ������ ��� ��� (�ش簨��������θ�)
	Perception->GetCurrentlyPerceivedActors(nullptr, actors);

	//CLog::Log("-- Current --");
	//for (AActor* actor : actors)
	//	CLog::Log(actor->GetName());

	//CLog::Log("-- Updated --");
	//for (AActor* actor : UpdatedActors)
	//	CLog::Log(actor->GetName());

	if (actors.Num() > 0)
	{
		CheckNull(Blackboard);
		Blackboard->SetValueAsObject("Target", actors[0]);

		return;
	}

	Blackboard->SetValueAsObject("Target", nullptr);
}
