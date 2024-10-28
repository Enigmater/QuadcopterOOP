#pragma once
#include "Quadcopter.h"
#include "ConcreteAircraftFactory.h"

class ControlledQuad : Quadcopter {
private:
	static ControlledQuad* instance;
	ControlledQuad(FlyModule* fm, DataCollectionModule* dcm, std::string name);
public:
	static ControlledQuad* GetInstance(FlyModule* fm, DataCollectionModule* dcm, std::string name);
};
