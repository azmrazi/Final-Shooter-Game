// Shooter Game


#include "Weapon/SHLauncherWeapon.h"
#include "Weapon/SHProjectTile.h"


void ASHLauncherWeapon::StartFire()
{
	MakeShot();
}

void ASHLauncherWeapon::MakeShot()
{
	if (!GetWorld() || IsAmmoEmpty()) return;

	FVector TraceStart, TraceEnd;
	if (!GetTraceData(TraceStart, TraceEnd)) return;

	FHitResult HitResult;
	MakeHit(HitResult, TraceStart, TraceEnd);

	const FVector EndPoint = HitResult.bBlockingHit ? HitResult.ImpactPoint : TraceEnd;
	const FVector Direction = (EndPoint - GetMuzzleWorldLocation()).GetSafeNormal();

	const FTransform SpawnTransform (FRotator::ZeroRotator, GetMuzzleWorldLocation());
	ASHProjectTile* Projectile = GetWorld()->SpawnActorDeferred<ASHProjectTile>(ProjectileClass, SpawnTransform);
	if (Projectile)
	{
		Projectile->SetShotDirection(Direction);
		Projectile->SetOwner(GetOwner());
		Projectile->FinishSpawning(SpawnTransform);
	}
	DecreaseAmmo();
	SpawnMuzzleFX();
}

