#pragma once
#include "ISensor.h"
#include <iostream>

class SmokeAnalayzer : public ISensor
{
public:
	SmokeAnalayzer(std::string name) { this->myName = name; }
	virtual std::string GetInfo();
	virtual void Add(ISensor* sensor);
	virtual void Remove(ISensor* sensor);
	virtual void AcceptVis(IVisitor* visitor);
};

