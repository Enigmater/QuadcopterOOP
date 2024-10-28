#pragma once
#include "ISensor.h"
class CommandSensor {
protected:
	ISensor* sensor;
public:
	void SetSensor(ISensor* sensor);
	virtual void Execute() = 0;
};
