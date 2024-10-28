#include "ConcreteDirector1.h"

ConcreteDirector1::ConcreteDirector1(Builder* builder) : Director(builder)
{
}

void ConcreteDirector1::Construct()
{
	builder->SetFlyMod(new ElecticEngine("Engine"));
}
