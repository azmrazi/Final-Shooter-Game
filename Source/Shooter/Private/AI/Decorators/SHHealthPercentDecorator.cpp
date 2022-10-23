#include "AI/Decorators/SHHealthPercentDecorator.h"
#include "AIController.h"
#include "C:\Games\Shooter 5.0 - 2\Intermediate\ProjectFiles\SHUtils.h"
#include "Components/SH_HealthComponent.h"

USHHealthPercentDecorator::USHHealthPercentDecorator()
{
	NodeName = "HealthPercent";
}

bool USHHealthPercentDecorator::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	const auto Controller = OwnerComp.GetAIOwner();
	if (!Controller) return false;

	const auto HealthComponent = SHUtils::GetSHPlayerComponent<USH_HealthComponent>(Controller->GetPawn());
	if (!HealthComponent || HealthComponent->IsDead()) return false;

	return HealthComponent->GetHealthPercent() <= HealthPercent;
}
