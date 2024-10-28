#pragma once
#include "DecoratorModule.h"
#include "FixationModuleImpl.h"
class FixationModule : public DecoratorModule
{
protected:
	FixationModuleImpl* fixationModule;
public:
	FixationModule(Aircraft* decoratedAircraft, FixationModuleImpl* fixationModule);
	virtual void ReciveText() = 0;
	virtual void ReciveImage() = 0;
};