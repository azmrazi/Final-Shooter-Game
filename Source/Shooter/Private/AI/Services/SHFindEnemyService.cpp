// Shooter Game


#include "AI/Services/SHFindEnemyService.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "C:\Games\Shooter 5.0 - 2\Intermediate\ProjectFiles\SHUtils.h"
#include "Components/MyAIPerceptionComponent.h"

USHFindEnemyService::USHFindEnemyService()
{
	NodeName = "Find Enemy";
}

void USHFindEnemyService::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	const auto Blackboard = OwnerComp.GetBlackboardComponent();
	if (Blackboard)
	{
		const auto Controller = OwnerComp.GetAIOwner();
		const auto PerceptionComponent = SHUtils::GetSHPlayerComponent<UMyAIPerceptionComponent>(Controller);
		if (PerceptionComponent)
		{
			Blackboard->SetValueAsObject(EnemyActorKey.SelectedKeyName, PerceptionComponent->GetClosestEnemy());

		}
	}
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
}
