#pragma once
#include "AircraftState.h"
#include "AircraftOff.h"
#include "AircraftDataColl.h"
#include "Aircraft.h"

class AircraftOn : public  AircraftState{
public:
	virtual void ActionStart(Aircraft* obj);
	virtual void ActionStop(Aircraft* obj);
	virtual void GetSensorInfo(Aircraft* obj);
};