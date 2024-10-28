#pragma once
#include "AircraftState.h"
#include "AircraftOn.h"
#include "Aircraft.h"

class AircraftOff : public AircraftState {
public:
	virtual void ActionStart(Aircraft* obj);
	virtual void ActionStop(Aircraft* obj);
	virtual void GetSensorInfo(Aircraft* obj);
};