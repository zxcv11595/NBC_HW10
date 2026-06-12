#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FTemporaryModule : public IModuleInterface
{
public:
	// 모듈이 로드될 때 실행
	virtual void StartupModule() override;

	// 모듈이 종료될 때 실행
	virtual void ShutdownModule() override;
};

