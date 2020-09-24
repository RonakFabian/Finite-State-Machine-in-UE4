

#include "MyState.h"

UMyState::UMyState() = default;

void UMyState::Set(AActor* OwningActor, UMyStateMachineBehaviour* State)
{
    this->Owner = OwningActor;
    this->StateMachineBehaviour = State;
}

void UMyState::Enter_State()
{
}

void UMyState::Update_State()
{
}

void UMyState::Exit_State()
{
}

