// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SHGameHUD.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API ASHGameHUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void DrawHUD() override;

private:
	void DrawCrossHair();
	
};
