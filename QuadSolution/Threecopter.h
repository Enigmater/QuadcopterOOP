#pragma once
#include "Aircraft.h"
class Threecopter : public Aircraft
{
public:
	Threecopter(FlyModule* flyModule, DataCollectionModule* dataCollectionModule);
	Threecopter(int id);
	~Threecopter();
	virtual void Fly();
	virtual Aircraft* Clone();
};

