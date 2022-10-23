// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "SHFireService.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API USHFireService : public UBTService
{
	GENERATED_BODY()
	
public:
	USHFireService();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	FBlackboardKeySelector EnemyActorKey;

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
