#include "ControlledQuad.h"

ControlledQuad* ControlledQuad::instance = nullptr;

ControlledQuad* ControlledQuad::GetInstance(FlyModule* fm, DataCollectionModule* dcm, std::string name)
{
	if (instance == nullptr) {
		instance = new ControlledQuad(fm, dcm, name);
	}
	return instance;
}

ControlledQuad::ControlledQuad(FlyModule* fm, DataCollectionModule* dcm, std::string name) : Quadcopter (fm, dcm, name)
{
	
}
