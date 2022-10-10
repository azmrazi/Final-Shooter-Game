// Shooter Game


#include "Player/SH_BaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SH_HealthComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SHWeaponComponent.h"
#include "GameFramework/Controller.h"

DEFINE_LOG_CATEGORY_STATIC(BaseCharacterLog, All, All);

// Sets default values
ASH_BaseCharacter::ASH_BaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
	SpringArmComponent->SetupAttachment(GetRootComponent());
	SpringArmComponent->bUsePawnControlRotation = true;

	CameraComponent = CreateAbstractDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(SpringArmComponent);	

	HealthComponent = CreateDefaultSubobject<USH_HealthComponent>("HealthComponent");

	HealthTextComponent = CreateDefaultSubobject<UTextRenderComponent>("HealthTextComponent");
	HealthTextComponent->SetupAttachment(GetRootComponent());

	WeaponComponent = CreateDefaultSubobject<USHWeaponComponent>("WeaponComponent");
	
}

// Called when the game starts or when spawned
void ASH_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	check(HealthComponent);
	check(HealthTextComponent);
	check(GetCharacterMovement());
	
	OnHealthChanged(HealthComponent->GetHealth());
	HealthComponent->OnDeath.AddUObject(this, &ASH_BaseCharacter::OnDeath);
	HealthComponent->OnHealthChanged.AddUObject(this, &ASH_BaseCharacter::OnHealthChanged);

	LandedDelegate.AddDynamic(this, &ASH_BaseCharacter::OnGroundLanded);

}

// Called every frame
void ASH_BaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	
}

// Called to bind functionality to input
void ASH_BaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(WeaponComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ASH_BaseCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASH_BaseCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &ASH_BaseCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("TurnAround", this, &ASH_BaseCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASH_BaseCharacter::Jump);

	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &ASH_BaseCharacter::StartRunning);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &ASH_BaseCharacter::StopRunning);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, WeaponComponent, &USHWeaponComponent::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, WeaponComponent, &USHWeaponComponent::StopFire);

}

float ASH_BaseCharacter::GetMovementDirection() const
{
	const auto VelocityNormal = GetVelocity().GetSafeNormal();
	const auto AngleBetween = FMath::Acos(FVector::DotProduct(GetActorForwardVector(), VelocityNormal));
	const auto CrossProduct = FVector::CrossProduct(GetActorForwardVector(), VelocityNormal);

	return FMath::RadiansToDegrees(AngleBetween) * FMath::Sign(CrossProduct.Z);
}



void ASH_BaseCharacter::MoveForward(float Amount)
{
	AddMovementInput(GetActorForwardVector(), Amount);
}

void ASH_BaseCharacter::MoveRight(float Amount)
{
	AddMovementInput(GetActorRightVector(), Amount);
}

void ASH_BaseCharacter::StartRunning()
{
	GetCharacterMovement()->MaxWalkSpeed = 1200.0f;
}

void ASH_BaseCharacter::StopRunning()
{
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}

void ASH_BaseCharacter::OnDeath()
{
	UE_LOG(BaseCharacterLog, Display, TEXT("Player %s is dead"), *GetName());

	PlayAnimMontage(DeathAnimMontage);

	GetCharacterMovement()->DisableMovement();

	SetLifeSpan(5.0f);

	if (Controller) {
		Controller->ChangeState(NAME_Spectating);
	}
	GetCapsuleComponent()->SetCollisionResponseToChannels(ECollisionResponse::ECR_Ignore);  
}

void ASH_BaseCharacter::OnHealthChanged(float Health)
{
	HealthTextComponent->SetText(FText::FromString(FString::Printf(TEXT("%.0f"), Health)));
}

void ASH_BaseCharacter::OnGroundLanded(const FHitResult& Hit)
{
	const auto FallVelocityZ = -GetCharacterMovement()->Velocity.Z;
	UE_LOG(BaseCharacterLog, Display, TEXT("On landed: %f"), FallVelocityZ);

	if (FallVelocityZ < LandedDamageVelocity.X) return;

	const auto FinalDamage = FMath::GetMappedRangeValueClamped(LandedDamageVelocity, LandedDamage, FallVelocityZ);
	TakeDamage(FinalDamage, FDamageEvent{}, nullptr, nullptr);
}





