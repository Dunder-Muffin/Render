#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FShaderModule : public IModuleInterface {
public:
	virtual void StartupModule() override;
};