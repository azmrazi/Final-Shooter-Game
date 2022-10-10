// Shooter Game


#include "Components/SH_HealthComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "TimerManager.h"



// Sets default values for this component's properties
USH_HealthComponent::USH_HealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}


// Called when the game starts
void USH_HealthComponent::BeginPlay()
{
	Super::BeginPlay();

	SetHealth(MaxHealth);
	
	AActor* ComponentOwner = GetOwner();
	if (ComponentOwner)
	{
		ComponentOwner->OnTakeAnyDamage.AddDynamic(this, &USH_HealthComponent::OnTakeAnyDamage);
	}
}

void USH_HealthComponent::OnTakeAnyDamage(AActor* DamageActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser) {

	if (Damage <= 0.0f || IsDead() || !GetWorld()) return;

	SetHealth(Health - Damage);
	OnHealthChanged.Broadcast(Health);

	if (IsDead())
	{
		OnDeath.Broadcast();
	}
	else if (AutoHeal)
	{
		GetWorld()->GetTimerManager().SetTimer(HealTimerHandle, this, &USH_HealthComponent::HealUptade, HealUpdateTime, true, HealDelay);
	}
}

void USH_HealthComponent::HealUptade()
{
	SetHealth(Health + HealModifier);
	OnHealthChanged.Broadcast(Health);

	if (FMath::IsNearlyEqual(Health, MaxHealth) && GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(HealTimerHandle);
	}
}

void USH_HealthComponent::SetHealth(float NewHealth)
{
	Health = FMath::Clamp(NewHealth, 0.0f, MaxHealth);
	OnHealthChanged.Broadcast(Health);
}
