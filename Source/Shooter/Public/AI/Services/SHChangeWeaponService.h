// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "SHChangeWeaponService.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API USHChangeWeaponService : public UBTService
{
	GENERATED_BODY()
	
public:
	USHChangeWeaponService();

protected:
	
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float Probability = 0.5f;
};
