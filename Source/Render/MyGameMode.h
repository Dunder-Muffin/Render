#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyGameMode.generated.h"

UCLASS()
class RENDER_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()

	TSharedPtr<class FViewExtension, ESPMode::ThreadSafe> ViewExtension;

	virtual void BeginPlay() override;
	
};
