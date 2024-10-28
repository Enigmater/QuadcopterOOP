#include "Solution.h"

Solution::Solution(Quadcopter* quadcopter)
{
	this->quadcopter = quadcopter;
}

Solution::~Solution()
{
}

void Solution::SetQuadcopter(Quadcopter* quadcopter)
{
	this->quadcopter = quadcopter;
}

void Solution::Runner()
{
	std::cout << "Quad name: ";
	quadcopter->PrintName();
	quadcopter->Fly();
	quadcopter->GetSensorInfo();
}
