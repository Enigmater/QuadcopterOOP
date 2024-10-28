#pragma once
#include "FixationModule.h"
class CertainFixationModule : public FixationModule
{
public:
	CertainFixationModule(Aircraft* decoratedAircraft, FixationModuleImpl* fixationModule);
	virtual void ReciveText();
	virtual void ReciveImage();
	virtual void Fly() {};
	void ReciveInfo();
};

