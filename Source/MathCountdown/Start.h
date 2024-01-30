// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Start.generated.h"


class UBigButton;

/**
 * 
 */
UCLASS()
class MATHCOUNTDOWN_API UStart : public UWidget
{
	GENERATED_BODY()
	

private:
	int bigNumbers = 4;
	int smallNumbers = 20;
};
