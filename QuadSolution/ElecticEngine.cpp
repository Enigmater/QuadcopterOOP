#include "ElecticEngine.h"

ElecticEngine::ElecticEngine(std::string name)
{
	this->myName = name;
}

ElecticEngine::~ElecticEngine()
{
}

void ElecticEngine::ActionStart()
{
	std::cout << "Supply power to the screws!" << std::endl;
}

void ElecticEngine::ActionStop()
{
	std::cout << "Power is not longer supplyed to the screws!" << std::endl;
}

void ElecticEngine::PrintName()
{
	std::cout << "My name is " + myName + "!" << std::endl;
}
