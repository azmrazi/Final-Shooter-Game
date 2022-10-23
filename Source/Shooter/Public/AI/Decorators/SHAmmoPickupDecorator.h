// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SHAmmoPickupDecorator.generated.h"

class ASHBaseWeapon;

UCLASS()
class SHOOTER_API USHAmmoPickupDecorator : public UBTDecorator
{
	GENERATED_BODY()
	
public:
	USHAmmoPickupDecorator();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	TSubclassOf<ASHBaseWeapon> WeaponType;

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const;
};
