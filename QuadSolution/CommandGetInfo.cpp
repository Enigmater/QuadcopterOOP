#include "CommandGetInfo.h"

CommandGetInfo::CommandGetInfo(ISensor* sensor)
{
	this->sensor = sensor;
}

void CommandGetInfo::Execute()
{
	std::cout << sensor->GetInfo() << std::endl;
}
