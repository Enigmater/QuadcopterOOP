#pragma once
#include "Aircraft.h"
class DecoratorModule : public Aircraft
{
private:
	Aircraft* decoratedAircraft;
public:
	DecoratorModule(Aircraft* decoratedAircraft) { this->decoratedAircraft = decoratedAircraft; }
	void SetAircraft(Aircraft* decoratedAircraft) { this->decoratedAircraft = decoratedAircraft; }
};