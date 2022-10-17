// Shooter Game


#include "Pickups/SHHealthPickup.h"
#include "Components/SH_HealthComponent.h"
#include "C:\Games\Shooter 5.0 - 2\Intermediate\ProjectFiles\SHUtils.h"

bool ASHHealthPickup::GivePickupTo(APawn* PlayerPawn)
{
    const auto HealthComponent = SHUtils::GetSHPlayerComponent<USH_HealthComponent>(PlayerPawn);
    if (!HealthComponent || HealthComponent->IsDead()) return false;

    return HealthComponent->TryToAddHealth(HealthAmount);
}
