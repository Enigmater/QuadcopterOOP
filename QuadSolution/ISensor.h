#pragma once
#include <string>
#include "IVisitor.h"
class ISensor
{
protected:
	std::string myName;
public:
	virtual std::string GetInfo() = 0;
	virtual void Add(ISensor* sensor) = 0;
	virtual void Remove(ISensor* sensor) = 0;
	std::string GetName() { return myName; }
	virtual void AcceptVis(IVisitor* visitor) = 0;
};

