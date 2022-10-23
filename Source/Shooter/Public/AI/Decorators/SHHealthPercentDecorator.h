// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SHHealthPercentDecorator.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API USHHealthPercentDecorator : public UBTDecorator
{
	GENERATED_BODY()
	
public:
	USHHealthPercentDecorator();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float HealthPercent = 0.6f;

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const;


};
