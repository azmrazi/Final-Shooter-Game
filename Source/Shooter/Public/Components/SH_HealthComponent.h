// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SH_HealthComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnDeath);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTER_API USH_HealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USH_HealthComponent();

	float GetHealth() const { return Health; }

	UFUNCTION(BlueprintCallable)
	bool IsDead() const { return FMath::IsNearlyZero(Health); }

	FOnDeath OnDeath;
	FOnHealthChanged OnHealthChanged;
protected:
	// Called when the game starts
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health", meta = (ClampMin = "0.0", ClampMax = "1000.0"))
	float MaxHealth = 100.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heal")
	bool AutoHeal = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heal")
	float HealUpdateTime = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heal")
	float HealDelay = 3.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heal")
	float HealModifier = 5.0f;

	virtual void BeginPlay() override;


private:
	float Health = 0.0f;

	FTimerHandle HealTimerHandle;

	UFUNCTION()
		void OnTakeAnyDamage(AActor* DamageActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	void HealUptade();
	void SetHealth(float NewHealth);

};
