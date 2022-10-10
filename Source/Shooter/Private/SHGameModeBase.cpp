// Shooter Game


#include "SHGameModeBase.h"
#include "Player/SH_BaseCharacter.h"
#include "Player/SHPlayerController.h"
#include "UI/SHGameHUD.h"

ASHGameModeBase::ASHGameModeBase()
{
	DefaultPawnClass = ASH_BaseCharacter::StaticClass();
	PlayerControllerClass = ASHPlayerController::StaticClass();
	HUDClass = ASHGameHUD::StaticClass();
}
