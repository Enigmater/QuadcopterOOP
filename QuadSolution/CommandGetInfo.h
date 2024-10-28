#pragma once
#include "CommandSensor.h"
#include <iostream>
class CommandGetInfo : public CommandSensor {
public:
	CommandGetInfo(ISensor* sensor);
	virtual void Execute();
};