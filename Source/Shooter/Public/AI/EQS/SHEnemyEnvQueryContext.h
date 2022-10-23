// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "SHEnemyEnvQueryContext.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API USHEnemyEnvQueryContext : public UEnvQueryContext
{
	GENERATED_BODY()
	
public:

	virtual void ProvideContext(FEnvQueryInstance& QueryInstance, FEnvQueryContextData& ContextData) const override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	FName EnemyActorKeyName = "EnemyActor";
};
