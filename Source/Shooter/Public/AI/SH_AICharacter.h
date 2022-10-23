// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "Player/SH_BaseCharacter.h"
#include "SH_AICharacter.generated.h"

class UBehaviorTree;


UCLASS()
class SHOOTER_API ASH_AICharacter : public ASH_BaseCharacter
{
	GENERATED_BODY()
	
public:
	ASH_AICharacter(const FObjectInitializer& ObjInit);

	UPROPERTY(EditDefaultsOnly, BLueprintReadWrite, Category = "AI")
	UBehaviorTree* UbehaviorTreeAsset;

protected: 

	virtual void OnDeath() override; 
};
