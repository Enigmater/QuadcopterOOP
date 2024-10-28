#include "FixationModule.h"

FixationModule::FixationModule(Aircraft* decoratedAircraft, FixationModuleImpl* fixationModule) : DecoratorModule(decoratedAircraft)
{
	this->fixationModule = fixationModule;
}
