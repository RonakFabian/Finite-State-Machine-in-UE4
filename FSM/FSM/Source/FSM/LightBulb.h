// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/PointLight.h"
#include "LightBulb.generated.h"

//Forward declarations to avoid circular dependencies
class UMyStateMachineBehaviour;
class USwitchOnState;
class USwitchOffState;


UCLASS()
class FSM_API ALightBulb : public AActor
{
    GENERATED_BODY()

private:

    UPROPERTY()
    bool isON = true;

public:
    ALightBulb();

    UPROPERTY()
    UMyStateMachineBehaviour* MyStateMachineBehaviour;

    UPROPERTY()
    USwitchOnState* Switch_On_State;

    UPROPERTY()
    USwitchOffState* Switch_Off_State;

    UPROPERTY(EditAnywhere)
    UPointLightComponent* PointLightComponent;


protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable)
    void ToggleState();
};
