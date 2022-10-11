// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "Weapon/SHBaseWeapon.h"
#include "SHLauncherWeapon.generated.h"

class ASHProjectTile;

UCLASS()
class SHOOTER_API ASHLauncherWeapon : public ASHBaseWeapon
{
	GENERATED_BODY()
	
public:
	virtual void StartFire() override;

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	TSubclassOf<ASHProjectTile> ProjectileClass;
	virtual void MakeShot() override;
};
