#pragma once
#include "FlyModule.h"
#include "IEngine.h"
#include <iostream>

class FlyModFactory {
public:
	FlyModule* CreateFlyMod(IEngine* engine);
};