#pragma once
#include "SmokeAnalayzer.h"
#include "SensorCreator.h"
class SmAnCreator : SensorCreator {
public:
	virtual ISensor* Create(std::string name);
};