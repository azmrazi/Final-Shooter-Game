// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "Weapon/SHBaseWeapon.h"
#include "SHRifleWeapon.generated.h"

class USHWeaponVFXComponent;
class UNiagaraComponent;
class UNiagaraSystem;
 
UCLASS()
class SHOOTER_API ASHRifleWeapon : public ASHBaseWeapon
{
	GENERATED_BODY()

public:

	ASHRifleWeapon();

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VFX")
	UNiagaraSystem* TraceFX;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VFX")
	FString TraceTargetName = "TraceTarget";


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "VFX")
	USHWeaponVFXComponent* WeaponVFXComponent;

	virtual void BeginPlay() override;
	void MakeDamage(const FHitResult& HitResult);
private:
	FTimerHandle ShotTimerHandle;
	
	UPROPERTY()
	UNiagaraComponent* MuzzleFXComponent;

	void InitMuzzleFX();
	void SetMuzzleFXVisibility(bool Visible);
	void SpawnTraceFX(const FVector& TraceStart, const FVector& TraceEnd);
};
