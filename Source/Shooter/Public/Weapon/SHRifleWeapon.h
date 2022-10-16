// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "Weapon/SHBaseWeapon.h"
#include "SHRifleWeapon.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API ASHRifleWeapon : public ASHBaseWeapon
{
	GENERATED_BODY()

public:
	virtual void StartFire() override;
	virtual void StopFire() override;

protected:
	virtual void MakeShot() override;

	virtual bool GetTraceData(FVector& TraceStart, FVector& TraceEnd) const;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float TimeBetweenShots = 0.1f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float BulletSpread = 1.5f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float DamageAmount = 10.0f;

	void MakeDamage(const FHitResult& HitResult);
private:
	FTimerHandle ShotTimerHandle;
	
};
