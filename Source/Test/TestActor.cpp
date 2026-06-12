// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"


// Sets default values
ATestActor::ATestActor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

    SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    RootComponent = SceneComponent;

    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    StaticMeshComponent->SetupAttachment(SceneComponent);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMesh(TEXT("/Engine/BasicShapes/Sphere.Sphere"));

    StaticMeshComponent->SetStaticMesh(SphereMesh.Object);
    
}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Spawn TestActor"));

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            3.0f,
            FColor::Red,
            TEXT("Spawn TestActor")
        );
    }
}


