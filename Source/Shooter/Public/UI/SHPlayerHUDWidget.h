// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHPlayerHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API USHPlayerHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	void OnHealthChanged(float Health, float HealthDelta);

	virtual bool Initialize() override;

	UFUNCTION(BlueprintImplementableEvent, Category = "UI")
	void OnTakeDamage();
};
