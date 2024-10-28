#pragma once
class Aircraft;
class AircraftState {
public:
	virtual void ActionStart(Aircraft* obj) = 0;
	virtual void ActionStop(Aircraft* obj) = 0;
	virtual void GetSensorInfo(Aircraft* obj) = 0;
};