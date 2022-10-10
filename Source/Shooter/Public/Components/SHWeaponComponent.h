// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHWeaponComponent.generated.h"

class ASHBaseWeapon;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTER_API USHWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USHWeaponComponent();

	void StartFire();

	void StopFire();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		TSubclassOf<ASHBaseWeapon> WeaponClass;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		FName WeaponAttachPointName = "WeaponSocket";
private:

	UPROPERTY()
		ASHBaseWeapon* CurrentWeapon = nullptr;
	void SpawnWeapon();

};
