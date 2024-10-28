#pragma once
#include "Builder.h"
#include "ElecticEngine.h"
class Director {
protected:
	Builder* builder;
public:
	Director(Builder* builder);
	virtual void Construct() = 0;
};