#include "Temporary.h"
#include "Modules/ModuleManager.h"

void FTemporaryModule::StartupModule()
{
    UE_LOG(LogTemp, Warning, TEXT("Temporary StartupModule"));

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            3.0f,
            FColor::Green,
            TEXT("Temporary StartupModule")
        );
    }
}

void FTemporaryModule::ShutdownModule()
{
    UE_LOG(LogTemp, Warning, TEXT("Temporary ShutdownModule"));

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            3.0f,
            FColor::Green,
            TEXT("Temporary ShutdownModule")
        );
    }
}

// Temporary 모듈을 언리얼 모듈 시스템에 등록
IMPLEMENT_MODULE(FTemporaryModule, Temporary)