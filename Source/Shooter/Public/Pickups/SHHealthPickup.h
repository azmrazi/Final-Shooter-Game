// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "Pickups/SHBasePickup.h"
#include "SHHealthPickup.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API ASHHealthPickup : public ASHBasePickup
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup", meta = (ClampMin = "1.0", ClampMax = "100.0"))
	float HealthAmount = 100.0f;

private:
	virtual bool GivePickupTo(APawn* PlayerPawn) override;
};
