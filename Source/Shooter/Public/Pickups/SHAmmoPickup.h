// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "Pickups/SHBasePickup.h"
#include "SHAmmoPickup.generated.h"

class ASHBaseWeapon;

UCLASS()
class SHOOTER_API ASHAmmoPickup : public ASHBasePickup
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup", meta = (ClampMin = "1.0", ClampMax = "10.0"))
	int32 ClipsAmount = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup", meta = (ClampMin = "1.0", ClampMax = "10.0"))
	TSubclassOf<ASHBaseWeapon> WeaponType;


private:
	virtual bool GivePickupTo(APawn* PlayerPawn) override;
};
