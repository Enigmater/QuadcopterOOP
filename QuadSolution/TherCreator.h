#pragma once
#include "Thermometer.h"
#include "SensorCreator.h"
class TherCreator : SensorCreator {
public:
	virtual ISensor* Create(std::string name);
};