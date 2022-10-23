// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_PickupCouldBeTaken.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API UEnvQueryTest_PickupCouldBeTaken : public UEnvQueryTest
{
	GENERATED_BODY()
	
public:
	virtual void RunTest(FEnvQueryInstance& QueryInstance) const override;
	UEnvQueryTest_PickupCouldBeTaken(const FObjectInitializer& ObjectInitializer);
};
