#pragma once
#include "ISensor.h"
#include <iostream>
#include <string>
class Thermometer : public ISensor
{
public:
	Thermometer(std::string name);
	~Thermometer();
	virtual std::string GetInfo();
	float GetCelsiusInfo();
	virtual void Add(ISensor* sensor);
	virtual void Remove(ISensor* sensor);
	virtual void AcceptVis(IVisitor* visitor);
};

