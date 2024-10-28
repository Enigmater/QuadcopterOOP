#pragma once
#include "DataCollectionModule.h"
class CollModFactory {
private:
	DataCollectionModule* dcm;
public:
	CollModFactory(DataCollectionModule* dcm);
	void AddSensor(ISensor* sensor);
	DataCollectionModule* CreateCollMod();
};