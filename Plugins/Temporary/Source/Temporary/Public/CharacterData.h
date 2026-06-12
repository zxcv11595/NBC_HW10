// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterData.generated.h"

// 캐릭터 데이터를 저장하기 위한 클래스
UCLASS()
class TEMPORARY_API UCharacterData : public UObject
{
	GENERATED_BODY()
	
public:
	UCharacterData();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Data")
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Data")
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Data")
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Data")
	float CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Data")
	float MoveSpeed;
};
