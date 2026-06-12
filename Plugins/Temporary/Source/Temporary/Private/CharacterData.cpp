// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterData.h"

UCharacterData::UCharacterData()
	:
	CharacterName(TEXT("None")),
	Level(1),
	MaxHealth(100.0f),
	CurrentHealth(MaxHealth),
	MoveSpeed(600.0f)
{

}
