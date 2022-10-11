// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHBaseWeapon.generated.h"


class USkeletalMeshComponent;

UCLASS()
class SHOOTER_API ASHBaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASHBaseWeapon();

	virtual void StartFire();

	virtual void StopFire();


protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		FName MuzzleSocketName = "MuzzleSocket";
	// Called when the game starts or when spawned
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float TraceMaxDistance = 1500.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float DamageAmount = 10.0f;

	virtual void BeginPlay() override;

	virtual void MakeShot();

	virtual bool GetTraceData(FVector& TraceStart, FVector& TraceEnd) const;

	APlayerController* GetPlayerController() const;

	bool GetPlayerViewPoint(FVector& ViewLocation, FRotator& ViewRotation) const;

	FVector GetMuzzleWorldLocation() const;

	void MakeHit(FHitResult& HitResult, const FVector& TraceStart, const FVector& TraceEnd);

	void MakeDamage(const FHitResult& HitResult);

};
