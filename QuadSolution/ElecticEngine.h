#pragma once
#include "IEngine.h"
#include <iostream>
class ElecticEngine : public IEngine
{
private:
	std::string myName;
public:
	ElecticEngine(std::string name);
	~ElecticEngine();
	virtual void ActionStart();
	virtual void ActionStop();
	void PrintName();
};

