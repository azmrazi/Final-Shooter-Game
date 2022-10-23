// Shooter Game


#include "AI/SH_AICharacter.h"
#include "AI/SHAIController.h"
#include "Components/SHAIWeaponComponent.h"
#include "BrainComponent.h"

ASH_AICharacter::ASH_AICharacter(const FObjectInitializer& ObjInit) : Super(ObjInit.SetDefaultSubobjectClass<USHAIWeaponComponent>("WeaponComponent"))
{
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	AIControllerClass = ASHAIController::StaticClass();

}

void ASH_AICharacter::OnDeath()
{
	Super::OnDeath();

	const auto SHController = Cast<AAIController>(Controller);
	if (SHController && SHController->BrainComponent)
	{
		SHController->BrainComponent->Cleanup();
	}

}
