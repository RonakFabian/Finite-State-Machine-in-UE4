// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyState.h"
#include "SwitchOnState.generated.h"

/**
 * 
 */
class ALightBulb;
UCLASS()
class FSM_API USwitchOnState : public UMyState
{
    GENERATED_BODY()
    public:
    virtual void Set(ALightBulb* Bulb, UMyStateMachineBehaviour* StateMachineBehaviour) override;
    
protected:
    
    USwitchOnState();
  

    virtual void Enter_State() override;
    virtual void Update_State() override;
    virtual void Exit_State() override;
};
