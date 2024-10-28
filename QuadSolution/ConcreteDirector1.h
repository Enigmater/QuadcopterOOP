#pragma once
#include "Director.h"
class ConcreteDirector1 : Director {
public:
	ConcreteDirector1(Builder* builder);
	virtual void Construct();
};