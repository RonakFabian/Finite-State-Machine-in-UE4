// Fill out your copyright notice in the Description page of Project Settings.


#include "LightBulb.h"
#include "MyStateMachineBehaviour.h"
#include "SwitchOnState.h"
#include "SwitchOffState.h"


// Sets default values
ALightBulb::ALightBulb()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    Switch_On_State = nullptr;
    PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    PointLightComponent->SetupAttachment(RootComponent);
    PointLightComponent->SetMobility(EComponentMobility::Movable);
    UE_LOG(LogTemp, Warning, TEXT("Bool value is: %i"), PointLightComponent->IsComponentTickEnabled());
    //	Switch_Off_State=nullptr;
    PointLightComponent->SetComponentTickEnabled(true);
}

// Called when the game starts or when spawned
void ALightBulb::BeginPlay()
{
    Super::BeginPlay();
    MyStateMachineBehaviour = NewObject<UMyStateMachineBehaviour>(this, UMyStateMachineBehaviour::StaticClass());

    Switch_On_State = NewObject<USwitchOnState>(this, USwitchOnState::StaticClass());
    Switch_On_State->Set(this, MyStateMachineBehaviour);

    Switch_Off_State = NewObject<USwitchOffState>(this, USwitchOffState::StaticClass());
    Switch_Off_State->Set(this, MyStateMachineBehaviour);

    MyStateMachineBehaviour->Init(Switch_Off_State);
}

// Called every frame
void ALightBulb::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ALightBulb::ToggleState()
{
    isON = !isON;
    if (isON)
    {
        MyStateMachineBehaviour->ChangeState(Switch_On_State);
    }
    else
        MyStateMachineBehaviour->ChangeState(Switch_Off_State);
}
