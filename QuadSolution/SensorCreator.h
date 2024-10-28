#pragma once
#include "ISensor.h"
class SensorCreator {
public:
	virtual ISensor* Create(std::string name) = 0;
};