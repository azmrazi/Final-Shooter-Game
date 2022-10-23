// Shooter Game


#include "Components/MyAIPerceptionComponent.h"
#include "AIController.h"
#include "C:\Games\Shooter 5.0 - 2\Intermediate\ProjectFiles\SHUtils.h"
#include "Components/SH_HealthComponent.h"
#include "Perception/AISense_Sight.h"


AActor* UMyAIPerceptionComponent::GetClosestEnemy() const
{
	TArray<AActor*> PercieveActors;
	GetCurrentlyPerceivedActors(UAISense_Sight::StaticClass(), PercieveActors);
	if (PercieveActors.Num() == 0) return nullptr;

	const auto Controller = Cast<AAIController>(GetOwner());
	if (!Controller) return nullptr;

	const auto Pawn = Controller->GetPawn();
	if (!Pawn) return nullptr;

	float BestDistance = MAX_FLT;
	AActor* BestPawn = nullptr;

	for (const auto PerceiveActor : PercieveActors)
	{
		const auto HealthComponent = SHUtils::GetSHPlayerComponent<USH_HealthComponent>(PerceiveActor);
		if (HealthComponent && !HealthComponent->IsDead())
		{
			const auto CurrentDistance = (PerceiveActor->GetActorLocation() - Pawn->GetActorLocation()).Size();
			if (CurrentDistance < BestDistance)
			{
				BestDistance = CurrentDistance;
				BestPawn = PerceiveActor;
			}
		}
	}
	return BestPawn;
}
