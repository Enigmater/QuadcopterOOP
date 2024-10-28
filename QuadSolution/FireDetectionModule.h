#pragma once
#include "SmokeAnalayzer.h"
#include "DecoratorModule.h"
class FireDetectionModule : public DecoratorModule
{
private:
	SmokeAnalayzer* smokesensor;
public:
	FireDetectionModule(Aircraft* decoratedAircraft, SmokeAnalayzer* smokesensor) : DecoratorModule(decoratedAircraft) { this->smokesensor = smokesensor; }
	void SetSmokeAnalayzer(SmokeAnalayzer* smokesensor) { this->smokesensor = smokesensor; }
	bool CheckFire() { return smokesensor->GetInfo() == "There is smoke"; }
	virtual void Fly() {

	}
};