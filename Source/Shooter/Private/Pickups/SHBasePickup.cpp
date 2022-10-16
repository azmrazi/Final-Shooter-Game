// Shooter Game


#include "Pickups/SHBasePickup.h"

// Sets default values
ASHBasePickup::ASHBasePickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASHBasePickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASHBasePickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

