#include "Thermometer.h"

Thermometer::Thermometer(std::string name)
{
	this->myName = name;
}

Thermometer::~Thermometer()
{
}

std::string Thermometer::GetInfo()
{
	return "There is 28.8 degrees Celsius!";
}

float Thermometer::GetCelsiusInfo()
{
	return rand() % 50 + 20;
}

void Thermometer::Add(ISensor* sensor)
{
	throw new std::exception("Not impliment");
}

void Thermometer::Remove(ISensor* sensor)
{
	throw new std::exception("Not impliment");
}

void Thermometer::AcceptVis(IVisitor* visitor)
{
	visitor->VisitTerm();
}

