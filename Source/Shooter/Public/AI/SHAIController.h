// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "SHAIController.generated.h"

class UMyAIPerceptionComponent;
 
UCLASS()
class SHOOTER_API ASHAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	ASHAIController();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UMyAIPerceptionComponent* SHPerceptionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	FName FocusOnKeyName = "EnemyActor";

	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float DeltaTime) override;

private:
	AActor* GetFocusOnActor() const;
};
