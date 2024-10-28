#include "FlyModule.h"

FlyModule::FlyModule(IEngine* engine)
{
	this->engine = engine;
}

FlyModule::~FlyModule()
{
}

void FlyModule::SetEnigne(IEngine* engine)
{
	this->engine = engine;
}

void FlyModule::ActionStart()
{
	engine->ActionStart();
}

void FlyModule::ActionStop()
{
	engine->ActionStop();
}

std::string FlyModule::CheckEfficiency()
{
	if (rand() % 10 < 1) return "Good";
	else return "Bad";
}
