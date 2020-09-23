// Fill out your copyright notice in the Description page of Project Settings.


#include "MyState.h"

UMyState::UMyState()
{
   
}

void UMyState::Set(AActor* OwningActor, UMyStateMachineBehaviour* State)
{
    this->Owner=OwningActor;
    this->StateMachineBehaviour=State;
}


void UMyState::Enter_State()
{
    UE_LOG(LogTemp, Warning, TEXT("Enter_State"));
}

void UMyState::Update_State()
{
    UE_LOG(LogTemp, Warning, TEXT("Update_State"));
}

void UMyState::Exit_State()
{
    UE_LOG(LogTemp, Warning, TEXT("Exit_State"));
}

