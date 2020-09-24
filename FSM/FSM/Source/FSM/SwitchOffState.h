// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyState.h"
#include "Components/PointLightComponent.h"
#include "SwitchOffState.generated.h"

/**
 * 
 */
UCLASS()
class FSM_API USwitchOffState : public UMyState
{
    GENERATED_BODY()
public:
    virtual void Set(AActor*, UMyStateMachineBehaviour*) override;

protected:

    USwitchOffState();


    virtual void Enter_State() override;
    virtual void Update_State() override;
    virtual void Exit_State() override;
};
