#pragma once
#include "IObserver.h"
#include <iostream>

class ObserverPos : public	IObserver{
private:
	Point posOld;
	Point posCur;
public:
	virtual void Update(Point pt);
	void Check();
};