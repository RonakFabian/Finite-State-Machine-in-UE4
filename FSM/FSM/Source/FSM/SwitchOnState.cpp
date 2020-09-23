// Fill out your copyright notice in the Description page of Project Settings.


#include "SwitchOnState.h"
#include "LightBulb.h"


void USwitchOnState::Set(AActor* OwningActor, UMyStateMachineBehaviour* State)
{
    Super::Set(OwningActor, State);
}

USwitchOnState::USwitchOnState()
{
}



void USwitchOnState::Enter_State()
{
    Super::Enter_State();
    UE_LOG(LogTemp, Warning, TEXT(" Switch ON Enter_State"));
    auto Light = Owner->FindComponentByClass<UPointLightComponent>();

    if (ensure(Light))
    {
        Light->ToggleVisibility();
        
        UE_LOG(LogTemp, Warning, TEXT("ON"));

    }
}

void USwitchOnState::Update_State()
{
    Super::Update_State();

    UE_LOG(LogTemp, Warning, TEXT(" Switch ON Update_State"));
}

void USwitchOnState::Exit_State()
{
    Super::Exit_State();

    UE_LOG(LogTemp, Warning, TEXT(" Switch ON Exit_State"));
}
