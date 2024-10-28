#include "AircraftOn.h"

void AircraftOn::ActionStart(Aircraft* obj)
{
	std::cout << "Drone already is on!" << std::endl;
}

void AircraftOn::ActionStop(Aircraft* obj)
{
	obj->flyModule->ActionStop();
	AircraftState* state = new AircraftOff();
	obj->SetState(state);
	std::cout << "Drone was turned off!" << std::endl;
}

void AircraftOn::GetSensorInfo(Aircraft* obj)
{
	std::cout << "Collecting info..." << std::endl;
	std::cout << obj->dataCollectionModule->GetInfo() << std::endl;
	AircraftState* state = new AircraftDataCall();
	obj->SetState(state);
}
