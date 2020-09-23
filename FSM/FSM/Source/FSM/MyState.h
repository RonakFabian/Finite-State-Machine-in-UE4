// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyStateMachineBehaviour.h"
#include  "LightBulb.h"
#include "MyState.generated.h"

/**
 * 
 */
UCLASS()
class FSM_API UMyState : public UObject
{
    GENERATED_BODY()

public:

    UPROPERTY()
    UMyStateMachineBehaviour* StateMachineBehaviour;

    UPROPERTY()
    ALightBulb* LightBulb;

    UMyState();

     virtual void Set(ALightBulb* Bulb, UMyStateMachineBehaviour* State);

    virtual void Enter_State();
    virtual void Update_State();
    virtual void Exit_State();
};
