#include "CGameMode.h"
#include "Global.h"

ACGameMode::ACGameMode()
{
	CHelpers::GetClass<APawn>(&DefaultPawnClass, "/Script/Engine.Blueprint'/Game/BP_CPlayer.BP_CPlayer_C'");
}

