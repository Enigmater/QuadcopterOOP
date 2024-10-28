#include "ConcreteDirector2.h"

ConcreteDirector2::ConcreteDirector2(Builder* builder) : Director(builder)
{
}

void ConcreteDirector2::Construct()
{
	builder->SetFlyMod(new ElecticEngine("Engine"));
	builder->SetDataCollMod(new Thermometer("Thermometer1"));
	builder->SetDataCollMod(new Thermometer("Thermometer2"));
}
