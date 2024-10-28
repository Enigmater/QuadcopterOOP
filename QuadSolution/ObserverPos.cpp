#include "ObserverPos.h"

void ObserverPos::Update(Point pt)
{
	this->posOld = this->posCur;
	this->posCur = pt;
	Check();
}

void ObserverPos::Check()
{
	if (posCur.GetX() > 150 || posCur.GetY() > 150)
		std::cout << "Warning! Drone is so far! X = " << posCur.GetX() << "; Y = " << posCur.GetY() << std::endl;
}
