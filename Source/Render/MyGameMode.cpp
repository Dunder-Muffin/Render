#include "MyGameMode.h"

#include "ViewExtension.h"

void AMyGameMode::BeginPlay() 
{
	Super::BeginPlay();

	ViewExtension = FSceneViewExtensions::NewExtension<FViewExtension>(FLinearColor::Red);
}