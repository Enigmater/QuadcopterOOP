#include "CertainFixationModule.h"

CertainFixationModule::CertainFixationModule(Aircraft* decoratedAircraft, FixationModuleImpl* fixationModule) : FixationModule(decoratedAircraft, fixationModule)
{
}

void CertainFixationModule::ReciveText()
{
	fixationModule->ReciveText();
}

void CertainFixationModule::ReciveImage()
{
	fixationModule->ReciveImage();
}

void CertainFixationModule::ReciveInfo()
{
	fixationModule->ReciveText();
	fixationModule->ReciveImage();
}
