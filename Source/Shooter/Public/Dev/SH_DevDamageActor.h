// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SH_DevDamageActor.generated.h"

UCLASS()
class SHOOTER_API ASH_DevDamageActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASH_DevDamageActor();

	UPROPERTY(VisibleAnywhere, BlueprintReadwrite)
	USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadwrite)
		float Radius = 300.0f;

	UPROPERTY(EditAnywhere, BlueprintReadwrite)
		FColor SphereColor = FColor::Red;

	UPROPERTY(EditAnywhere, BlueprintReadwrite)
		float Damage = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadwrite)
		bool DoFullDamage = false;

	UPROPERTY(EditAnywhere, BlueprintReadwrite)
	TSubclassOf<UDamageType> DamageType;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
