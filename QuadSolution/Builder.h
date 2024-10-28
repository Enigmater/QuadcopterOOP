#pragma once
#include "FlyModFactory.h"
#include "CollModFactory.h"
class Builder {
private:
	FlyModFactory* fmFactory;
	CollModFactory* cmFactory;
public: 
	Builder();
	void SetFlyMod(IEngine* engine);
	void SetDataCollMod(ISensor* sensor);
	void SetWorker(FlyModFactory* fmFactory);
	void SetWorker(CollModFactory* cmFactory);
};