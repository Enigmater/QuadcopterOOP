#include "AircraftProxy.h"

AircraftProxy::AircraftProxy(FlyModule* flyModule, DataCollectionModule* dataCollectionModule, Quadcopter* quadcopter) : Aircraft(flyModule, dataCollectionModule)
{
	this->quadcopter = quadcopter;
}

AircraftProxy::~AircraftProxy()
{
}

void AircraftProxy::Fly()
{
	if (quadcopter->CheckEfficiency() == "Bad") {
		std::cout << "\nFly module is broken! Flight is not available!" << std::endl; 
		return;
	}
	this->ActionStart();
	std::cout << "I am flying!" << std::endl;
	this->ActionStop();
}
