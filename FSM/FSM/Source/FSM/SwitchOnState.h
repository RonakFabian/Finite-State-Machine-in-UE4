// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyState.h"
#include "SwitchOnState.generated.h"

/**
 * 
 */

UCLASS()
class FSM_API USwitchOnState : public UMyState
{
    GENERATED_BODY()
public:
    virtual void Set(AActor*, UMyStateMachineBehaviour*) override;

protected:

    USwitchOnState();


    virtual void Enter_State() override;
    virtual void Update_State() override;
    virtual void Exit_State() override;
};
