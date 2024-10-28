#pragma once
#include "Aircraft.h"
#include "DataCollectionModule.h"
#include "IEngine.h"
#include <iostream>

class Quadcopter : public Aircraft
{
private:
	std::string myName;
public:
	Quadcopter(int id);
	Quadcopter(FlyModule* flyModule, DataCollectionModule* dataCollectionModule, std::string name);
	~Quadcopter();
	virtual void Fly();
	virtual Aircraft* Clone();
	void PrintName();
};

