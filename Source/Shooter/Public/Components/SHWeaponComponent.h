// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHCoreTypes.h"
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

	void NextWeapon();

	void Reload();

	UFUNCTION(BlueprintCallable, Category = "UI")
	bool GetWeaponUIData(FWeaponUIData& UIData) const;
	
	UFUNCTION(BlueprintCallable, Category = "UI")
	bool GetWeaponAmmoData(FAmmoData& AmmoData) const;

	bool TryToAddAmmo(TSubclassOf<ASHBaseWeapon> WeaponType, int32 ClipsAmount);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	TArray<FWeaponData> WeaponData;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	FName WeaponEquipSocketName = "WeaponSocket";

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	FName WeaponArmorySocketName = "ArmorySocket";

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage* EquipAnimMontage;
private:

	UPROPERTY()
		ASHBaseWeapon* CurrentWeapon = nullptr;

	UPROPERTY()
		TArray<ASHBaseWeapon*> Weapons;

	UPROPERTY()
		UAnimMontage* CurrentReloadAnimMontage = nullptr;

	int32 CurrentWeaponIndex = 0;
	bool EquipAnimInProgress = false;
	bool ReloadAnimInProgress = false;

	void SpawnWeapons();
	void AttachWeaponToSocket(ASHBaseWeapon* Weapon, USceneComponent* SceneComponent, const FName& SocketName);
	void EquipWeapon(int32 WeaponIndex);

	void PlayAnimMontage(UAnimMontage* Animation);
	void InitAnimations();
	void OnEquipFinished(USkeletalMeshComponent* MeshComponent);
	void OnReloadFinished(USkeletalMeshComponent* MeshComponent);

	bool CanFire() const;
	bool CanEquip() const;
	bool CanReload() const;

	void OnEmptyClip(ASHBaseWeapon* AmmoEmptyWeapon);
	void ChangeClip();

};
