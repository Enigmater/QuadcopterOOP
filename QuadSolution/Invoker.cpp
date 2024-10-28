#include "Invoker.h"

Invoker::Invoker(CommandSensor* command)
{
	this->command = command;
}

void Invoker::SetCommand(CommandSensor* command)
{
	this->command = command;
}

void Invoker::Execute()
{
	command->Execute();
}
