#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyStateMachineBehaviour.h"
#include "MyState.generated.h"


UCLASS()
class FSM_API UMyState : public UObject
{
    GENERATED_BODY()

public:

    UPROPERTY()
    UMyStateMachineBehaviour* StateMachineBehaviour;

    UPROPERTY()
    AActor* Owner;

    UMyState();

    virtual void Set(AActor*, UMyStateMachineBehaviour*);

    virtual void Enter_State() ;
    virtual void Update_State() ;
    virtual void Exit_State();

    // Add extra states here i.e logic, input updates
};
