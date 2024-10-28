#pragma once
#include "Thermometer.h"
#include "FireDetectionModule.h"
class CelsiusToFareneitAdapter : public FireDetectionModule
{
private:
	Thermometer* term;
public:
	CelsiusToFareneitAdapter(Aircraft* decoratedAircraft, SmokeAnalayzer* smokesensor, Thermometer* term) : FireDetectionModule(decoratedAircraft, smokesensor) { this->term = term; }
	virtual bool CheckFire();
};