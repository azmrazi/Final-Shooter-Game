// Shooter Game


#include "Pickups/SHAmmoPickup.h"
#include "Components/SHWeaponComponent.h"
#include "Components/SH_HealthComponent.h"
#include "C:\Games\Shooter 5.0 - 2\Intermediate\ProjectFiles\SHUtils.h"


bool ASHAmmoPickup::GivePickupTo(APawn* PlayerPawn)
{
    const auto HealthComponent = SHUtils::GetSHPlayerComponent<USH_HealthComponent>(PlayerPawn);
    if (!HealthComponent || HealthComponent->IsDead()) return false;

    const auto WeaponComponent = SHUtils::GetSHPlayerComponent<USHWeaponComponent>(PlayerPawn);
    if (!WeaponComponent) return false;

    return WeaponComponent->TryToAddAmmo(WeaponType, ClipsAmount);
}
