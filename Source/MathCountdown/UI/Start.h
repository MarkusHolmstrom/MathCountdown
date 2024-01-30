// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "Start.generated.h"

/**
 * 
 */

class UBigButton;

UCLASS()
class MATHCOUNTDOWN_API UStart : public UCanvasPanel
{
	GENERATED_BODY()
	
public:
	TArray<UBigButton*> bigButtons;

	TArray<UBigButton*> smallButtons;

	// enum for diffuclty

	// done button needed here?

	// size/distance between buttons: diff for altitude/width?

private:
	int bigNumbers = 4;
	TArray<int> bigNumberList = { 25, 50, 75, 100 };

	int smallNumbers = 20;
	TArray<int> smallNumberList = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10 };
};
