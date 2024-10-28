#include "AircraftDataColl.h"

void AircraftDataCall::ActionStart(Aircraft* obj)
{
	obj->flyModule->ActionStart();
	AircraftState* state = new AircraftOn();
	obj->SetState(state);
	std::cout << "Drone was turned on!" << std::endl;
}

void AircraftDataCall::ActionStop(Aircraft* obj)
{
	obj->flyModule->ActionStop();
	AircraftState* state = new AircraftOff();
	obj->SetState(state);
	std::cout << "Drone was turned off!" << std::endl;
}

void AircraftDataCall::GetSensorInfo(Aircraft* obj)
{
	std::cout << "Drone is already collecting info!" << std::endl;
}
