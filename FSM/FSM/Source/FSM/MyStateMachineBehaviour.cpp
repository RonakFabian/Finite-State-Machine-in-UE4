// Fill out your copyright notice in the Description page of Project Settings.


#include "MyStateMachineBehaviour.h"
#include "MyState.h"

UMyStateMachineBehaviour::UMyStateMachineBehaviour()
{
    UE_LOG(LogTemp, Warning, TEXT("My StateMachine Behaviour Created"));

    CurrentState = nullptr;
}

void UMyStateMachineBehaviour::Init(UMyState* initState)
{
    if (initState)
    {
        CurrentState = initState;
        CurrentState->Enter_State();

    }
}

void UMyStateMachineBehaviour::ChangeState(UMyState* newState)
{
    CurrentState->Exit_State();
    if (newState)
    {
        CurrentState = newState;
        CurrentState->Enter_State();
    }
    else
    UE_LOG(LogTemp, Warning, TEXT("Fail_Change_State"));
}
