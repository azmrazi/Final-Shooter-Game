// Shooter Game


#include "UI/SHPlayerHUDWidget.h"
#include "Components/SH_HealthComponent.h"
#include "C:\Games\Shooter 5.0 - 2\Intermediate\ProjectFiles\SHHUtils.h"


void USHPlayerHUDWidget::OnHealthChanged(float Health, float HealthDelta)
{
	if (HealthDelta < 0.0f)
	{
		OnTakeDamage();
	}
	
}

bool USHPlayerHUDWidget::Initialize()
{
	const auto HealthComponent = SHHUtils::GetSHPlayerComponent<USH_HealthComponent>(GetOwningPlayerPawn());
	if (HealthComponent)
	{
		HealthComponent->OnHealthChanged.AddUObject(this, &USHPlayerHUDWidget::OnHealthChanged);
	}
	return Super::Initialize();
}
