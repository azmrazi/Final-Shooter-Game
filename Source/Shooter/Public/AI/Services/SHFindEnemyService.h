// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "SHFindEnemyService.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API USHFindEnemyService : public UBTService
{
	GENERATED_BODY()
	
public:
	USHFindEnemyService();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	FBlackboardKeySelector EnemyActorKey;

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
