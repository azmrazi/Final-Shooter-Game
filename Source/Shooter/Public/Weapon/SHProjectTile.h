// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHProjectTile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class USHWeaponVFXComponent;

UCLASS()
class SHOOTER_API ASHProjectTile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASHProjectTile();

	void SetShotDirection(const FVector& Direction) { ShotDirection = Direction; }

protected:
	UPROPERTY(VisibleAnywhere, Category = "Weapon")
		USphereComponent* CollisionComponent;

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
		UProjectileMovementComponent* MovementComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
		float DamageRadius = 200.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
		float DamageAmount = 50.0f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
		bool DoFullDamage = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
		float LifeSeconds = 5.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "VFX")
	USHWeaponVFXComponent* WeaponVFXComponent;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
private:
	FVector ShotDirection;

	UFUNCTION()
		void OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
			FVector NormalImpulse, const FHitResult& Hit);

	AController* GetController() const;
};
