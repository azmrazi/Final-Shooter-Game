#include "AI/Decorators/SHAmmoPickupDecorator.h"
#include "AIController.h"
#include "C:\Games\Shooter 5.0 - 2\Intermediate\ProjectFiles\SHUtils.h"
#include "Components/SHWeaponComponent.h"



USHAmmoPickupDecorator::USHAmmoPickupDecorator()
{
	NodeName = "Need Ammo";

}

bool USHAmmoPickupDecorator::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	const auto Controller = OwnerComp.GetAIOwner();
	if (!Controller) return false;

	const auto WeaponComponent = SHUtils::GetSHPlayerComponent<USHWeaponComponent>(Controller->GetPawn());
	if (!WeaponComponent) return false;

	return WeaponComponent->NeedAmmo(WeaponType);
}
