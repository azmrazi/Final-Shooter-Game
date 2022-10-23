// Shooter Game


#include "AI/SHAIController.h"
#include "AI/SH_AICharacter.h"
#include "Components/MyAIPerceptionComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

ASHAIController::ASHAIController()
{
	SHPerceptionComponent = CreateDefaultSubobject<UMyAIPerceptionComponent>("SHPerceptionComponent");
	SetPerceptionComponent(*SHPerceptionComponent);
}

void ASHAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	const auto SHCharacter = Cast<ASH_AICharacter>(InPawn);
	if(SHCharacter)
	{
		RunBehaviorTree(SHCharacter->UbehaviorTreeAsset);
	}
}

void ASHAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	const auto AimActor = GetFocusOnActor();
	SetFocus(AimActor);
}

AActor* ASHAIController::GetFocusOnActor() const
{
	if (!GetBlackboardComponent()) return nullptr;
	return Cast<AActor>(GetBlackboardComponent()->GetValueAsObject(FocusOnKeyName));
}
