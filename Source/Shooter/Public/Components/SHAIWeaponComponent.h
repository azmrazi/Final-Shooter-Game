// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "Components/SHWeaponComponent.h"
#include "SHAIWeaponComponent.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API USHAIWeaponComponent : public USHWeaponComponent
{
	GENERATED_BODY()

public:
	virtual void StartFire() override;
	virtual void NextWeapon() override;
	
};
