#include "Threecopter.h"

Threecopter::Threecopter(int id)
{
	this->id = id;
	this->pos = Point(rand() % 300, rand() % 300);
}

Threecopter::Threecopter(FlyModule* flyModule, DataCollectionModule* dataCollectionModule) : Aircraft(flyModule, dataCollectionModule)
{
}

Threecopter::~Threecopter()
{
}

void Threecopter::Fly()
{
	this->ActionStart();
	std::cout << "I am flying!" << std::endl;
	this->ActionStop();
}

Aircraft* Threecopter::Clone()
{
	return new Threecopter(*this);
}
