#pragma once
#include "Director.h"
#include "ElecticEngine.h"
#include "Thermometer.h"
#include "Builder.h"
class ConcreteDirector2 : Director {
public:
	ConcreteDirector2(Builder* builder);
	virtual void Construct();
};