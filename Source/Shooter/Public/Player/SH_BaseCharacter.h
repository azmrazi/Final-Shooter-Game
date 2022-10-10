// Shooter Game

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SH_BaseCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UTextRenderComponent;
class USH_HealthComponent;
class USHWeaponComponent;


UCLASS()
class SHOOTER_API ASH_BaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASH_BaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	USH_HealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		USHWeaponComponent* WeaponComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UTextRenderComponent* HealthTextComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage* DeathAnimMontage;
	
	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	FVector2D LandedDamageVelocity = FVector2D(900.0f, 1200.0f);

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	FVector2D LandedDamage = FVector2D(10.0f, 100.0f);

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Movement")
		float GetMovementDirection() const;

private:
	void MoveForward(float Amount);
	void MoveRight(float Amount);
	void StartRunning();
	void StopRunning();

	void OnDeath();
	void OnHealthChanged(float Health);

	UFUNCTION()
	void OnGroundLanded(const FHitResult& Hit);
	
	
};
