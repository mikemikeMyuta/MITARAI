// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DPICustomScalingRule.h"
#include "MyDPICustomScalingRule.generated.h"

/**
 * 
 */
UCLASS()
class MITARAI2_API UMyDPICustomScalingRule : public UDPICustomScalingRule
{
	GENERATED_BODY()

public:

	virtual float GetDPIScaleBasedOnSize(FIntPoint Size) const override;
	
};
