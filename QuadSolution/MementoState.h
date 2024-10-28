#pragma once
#include "AircraftState.h"
class MementoState {
private:
	AircraftState* state;
public:
	MementoState(AircraftState* state);
	void SetState(AircraftState* state);
	AircraftState* GetState();
};