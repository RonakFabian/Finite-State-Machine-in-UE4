// Fill out your copyright notice in the Description page of Project Settings.


#include "LightBulb.h"
#include "MyStateMachineBehaviour.h"
#include "SwitchOnState.h"
#include "SwitchOffState.h"


ALightBulb::ALightBulb()
{
    PrimaryActorTick.bCanEverTick = true;

    PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    PointLightComponent->SetupAttachment(RootComponent);
}

void ALightBulb::BeginPlay()
{
    Super::BeginPlay();

    //Create a FSM and adding States into it and passing the owning AActor and UMyStateMachineBehaviour reference
    MyStateMachineBehaviour = NewObject<UMyStateMachineBehaviour>(this, UMyStateMachineBehaviour::StaticClass());

    Switch_On_State = NewObject<USwitchOnState>(this, USwitchOnState::StaticClass());
    Switch_On_State->Set(this, MyStateMachineBehaviour);

    Switch_Off_State = NewObject<USwitchOffState>(this, USwitchOffState::StaticClass());
    Switch_Off_State->Set(this, MyStateMachineBehaviour);

    //Setting Initial state to Switch Off State
    MyStateMachineBehaviour->Init(Switch_On_State);
}

void ALightBulb::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ALightBulb::ToggleState()
{
    isON = !isON;

    isON
        ? MyStateMachineBehaviour->ChangeState(Switch_On_State)
        : MyStateMachineBehaviour->ChangeState(Switch_Off_State);
}
