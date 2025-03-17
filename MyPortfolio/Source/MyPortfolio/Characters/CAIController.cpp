#include "../Characters/CAIController.h"
#include "../Global.h"

#include "GameFramework/Character.h"
#include "../Characters/CEnemy_AI.h"
#include "Perception/AIPerceptionComponent.h" //AI���� ������Ʈ
#include "Perception/AISenseConfig_Sight.h"// �þ� ���� : ���� 
#include "BehaviorTree/BehaviorTree.h" // BT

ACAIController::ACAIController()
{
	CHelpers::CreateActorComponent<UAIPerceptionComponent>(this, &Perception, "Perception");

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
}

void ACAIController::OnUnPossess() 
{
	Super::OnUnPossess();
}