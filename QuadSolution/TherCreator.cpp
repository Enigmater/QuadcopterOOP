#include "TherCreator.h"

ISensor* TherCreator::Create(std::string name)
{
    return new Thermometer(name);
}
