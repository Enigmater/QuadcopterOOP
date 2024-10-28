#pragma once
#include "Point.h"
class IObserver {
public:
	virtual void Update(Point pt) = 0;
};