// Fill out your copyright notice in the Description page of Project Settings.


#include "TemporaryActor.h"
#include "Engine/Engine.h"

// Sets default values
ATemporaryActor::ATemporaryActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

    SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    RootComponent = SceneComponent;

    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    StaticMeshComponent->SetupAttachment(SceneComponent);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));

    StaticMeshComponent->SetStaticMesh(CubeMesh.Object);
}

// Called when the game starts or when spawned
void ATemporaryActor::BeginPlay()
{
	Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("Spawn TemporaryActor"));

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            3.0f,
            FColor::Blue,
            TEXT("Spawn TemporaryActor")
        );
    }
}



