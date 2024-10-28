#include "MementoState.h"

MementoState::MementoState(AircraftState* state)
{
	this->state = state;
}

void MementoState::SetState(AircraftState* state)
{
	this->state = state;
}

AircraftState* MementoState::GetState()
{
	return this->state;
}
