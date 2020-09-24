// Fill out your copyright notice in the Description page of Project Settings.


#include "SwitchOffState.h"
#include "LightBulb.h"


void USwitchOffState::Set(AActor* OwningActor, UMyStateMachineBehaviour* State)
{
    Super::Set(OwningActor, State);
}

USwitchOffState::USwitchOffState() = default;


void USwitchOffState::Enter_State()
{
    Super::Enter_State();
    UE_LOG(LogTemp, Warning, TEXT(" Switch OFF Enter_State"));
    auto Light = Owner->FindComponentByClass<UPointLightComponent>();

    if (ensure(Light))
    {
        Light->ToggleVisibility();

        UE_LOG(LogTemp, Warning, TEXT("OFF"));
    }
}

void USwitchOffState::Update_State()
{
    Super::Update_State();
    UE_LOG(LogTemp, Warning, TEXT(" Switch OFF Update_State"));
}

void USwitchOffState::Exit_State()
{
    Super::Exit_State();
    UE_LOG(LogTemp, Warning, TEXT(" Switch OFF Exit_State"));
}
