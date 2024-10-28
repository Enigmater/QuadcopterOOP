#include "SmAnCreator.h"

ISensor* SmAnCreator::Create(std::string name)
{
    return new SmokeAnalayzer(name);
}
