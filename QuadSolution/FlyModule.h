#pragma once
#include "IEngine.h"
#include <string>

class FlyModule
{
private:
	IEngine* engine;
public:
	FlyModule(IEngine* engine);
	~FlyModule();

	void SetEnigne(IEngine* engine);
	void ActionStart();
	void ActionStop();
	std::string CheckEfficiency();
};

