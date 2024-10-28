#pragma once
#include "Quadcopter.h"
#include "Threecopter.h"
#include "Aircraft.h"
#include <map>
#include <iostream>
class QuadcopterFactory
{
private:
	std::map<int, Aircraft*> quads;
	Aircraft* quad;
public:
	Aircraft& GetQuadcopter(int id);
};

