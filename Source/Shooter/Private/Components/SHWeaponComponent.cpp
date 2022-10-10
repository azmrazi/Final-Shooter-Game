// Shooter Game


#include "Components/SHWeaponComponent.h"
#include "Weapon/SHBaseWeapon.h"
#include "GameFramework/Character.h"


USHWeaponComponent::USHWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}

void USHWeaponComponent::StartFire()
{
	if (!CurrentWeapon) return;
	CurrentWeapon->StartFire();

}

void USHWeaponComponent::StopFire()
{
	if (!CurrentWeapon) return;
	CurrentWeapon->StopFire();

}

// Called when the game starts
void USHWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	SpawnWeapon();
}
void USHWeaponComponent::SpawnWeapon()
{

	if (!GetWorld()) return;

	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if (!Character) return;


	CurrentWeapon = GetWorld()->SpawnActor<ASHBaseWeapon>(WeaponClass);
	if (!CurrentWeapon) return;
	
	
	FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
	CurrentWeapon->AttachToComponent(Character->GetMesh(), AttachmentRules, WeaponAttachPointName);
	CurrentWeapon->SetOwner(Character);
		
	

}

