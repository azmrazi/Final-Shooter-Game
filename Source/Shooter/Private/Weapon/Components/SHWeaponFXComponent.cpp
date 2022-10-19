// Shooter Game


#include "Weapon/Components/SHWeaponFXComponent.h"

// Sets default values
ASHWeaponFXComponent::ASHWeaponFXComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASHWeaponFXComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASHWeaponFXComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

