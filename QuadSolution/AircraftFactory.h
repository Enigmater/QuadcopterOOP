#pragma once
#include "Aircraft.h"
#include "Quadcopter.h"
#include "Threecopter.h"

class AircraftFactory {
public:
	virtual Quadcopter* CreateQuad() = 0;
	virtual Threecopter* CreateThree() = 0;
};