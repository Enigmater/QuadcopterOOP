#pragma once
#include "CommandSensor.h"
class Invoker {
private:
	CommandSensor* command;
public:
	Invoker(CommandSensor* command);
	void SetCommand(CommandSensor* command);
	void Execute();
};