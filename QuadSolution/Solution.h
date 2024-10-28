#pragma once
#include "ISolution.h"
#include "Quadcopter.h"
class Solution : public ISolution
{
private:
	Quadcopter* quadcopter;
public:
	Solution(Quadcopter* quadcopter);
	~Solution();
	void SetQuadcopter(Quadcopter* quadcopter);
	virtual void Runner();
};

