// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "MyStateMachineBehaviour.generated.h"

class UMyState;
/**
 * 
 */
UCLASS()
class FSM_API UMyStateMachineBehaviour : public UObject
{
    GENERATED_BODY()

public:
    UMyStateMachineBehaviour();

    UPROPERTY()
    UMyState* CurrentState=nullptr;


   

    void Init(UMyState* initState);
    void ChangeState(UMyState* newState);

   // FORCEINLINE UMyState* GetCurrentState() const { return CurrentState; }
};
