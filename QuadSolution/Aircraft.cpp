#include "Aircraft.h"

Aircraft::Aircraft(FlyModule* flyModule, DataCollectionModule* dataCollectionModule)
{
	this->flyModule = flyModule;
	this->dataCollectionModule = dataCollectionModule;
	pos = Point(rand() % 300, rand() % 300);
}

Aircraft::~Aircraft()
{
}

void Aircraft::SetEngine(IEngine* enigne)
{
	flyModule->SetEnigne(enigne);
}

void Aircraft::SetState(AircraftState* state)
{
	this->state = state;
}

void Aircraft::ActionStart()
{
	state->ActionStart(this);
}

void Aircraft::ActionStop()
{
	state->ActionStop(this);
}

void Aircraft::GetSensorInfo()
{
	state->GetSensorInfo(this);
}

void Aircraft::SetID(int id)
{
	this->id = id;
}

std::string Aircraft::CheckEfficiency()
{
	return flyModule->CheckEfficiency();
}

void Aircraft::SetMemento(MementoState* state)
{
	this->state = state->GetState();
}

MementoState* Aircraft::CreateMemento()
{
	return new MementoState(this->state);
}

void Aircraft::AttachObs(IObserver* obs)
{
	this->observer = obs;
}

void Aircraft::DettachObs(IObserver* obs)
{
	if (this->observer == obs) this->observer = NULL;
}

void Aircraft::Notify()
{
	observer->Update(this->pos);
}

