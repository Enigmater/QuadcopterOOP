#pragma once
#include "Aircraft.h"
#include "Quadcopter.h"
#include <iostream>

class AircraftProxy : public Aircraft
{
private:
	Quadcopter* quadcopter;
public:
	AircraftProxy(FlyModule* flyModule, DataCollectionModule* dataCollectionModule, Quadcopter* quadcopter);
	~AircraftProxy();
	virtual void Fly();
};

