#include "Quadcopter.h"

Quadcopter::Quadcopter(int id)
{
	this->id = id;
	this->pos = Point(rand() % 300, rand() % 300);
}

Quadcopter::Quadcopter(FlyModule* flyModule, DataCollectionModule* dataCollectionModule, std::string name) : Aircraft(flyModule, dataCollectionModule)
{
	this->myName = name;
}

Quadcopter::~Quadcopter()
{
}

void Quadcopter::Fly()
{
	this->ActionStart();
	std::cout << "I am flying!" << std::endl;
	this->ActionStop();
}

Aircraft* Quadcopter::Clone()
{
	return new Quadcopter(*this);
}

void Quadcopter::PrintName()
{
	std::cout << "My name is " << myName + "!" << std::endl;
}
