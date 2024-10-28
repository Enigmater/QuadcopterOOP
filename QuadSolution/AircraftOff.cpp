#include "AircraftOff.h"

void AircraftOff::ActionStart(Aircraft* obj)
{
	obj->flyModule->ActionStart();
	AircraftState* state = new AircraftOn();
	obj->SetState(state);
	std::cout << "Drone was turned on!" << std::endl;
}

void AircraftOff::ActionStop(Aircraft* obj)
{
	std::cout << "Dron is already turned off!" << std::endl;
}

void AircraftOff::GetSensorInfo(Aircraft* obj)
{
	std::cout << "Drone is turned off! Can't get info!" << std::endl;
}
