#pragma once
#include "AircraftFactory.h"
#include "Quadcopter.h"
#include "Threecopter.h"
#include "ElecticEngine.h"
#include "Thermometer.h"
#include "SmokeAnalayzer.h"

class ConcreteAircraftFactory : AircraftFactory {
public:
	virtual Quadcopter* CreateQuad();
	virtual Threecopter* CreateThree();
};