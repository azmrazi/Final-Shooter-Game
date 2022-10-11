// Shooter Game


#include "Weapon/SHProjectTile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ASHProjectTile::ASHProjectTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
	CollisionComponent->InitSphereRadius(5.0f);
	SetRootComponent(CollisionComponent);

	MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
}

// Called when the game starts or when spawned
void ASHProjectTile::BeginPlay()
{
	Super::BeginPlay();
	
	check(MovementComponent);

	MovementComponent->Velocity = ShotDirection * MovementComponent->InitialSpeed;
	SetLifeSpan(5.0f);
}


