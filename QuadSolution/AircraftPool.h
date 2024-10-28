#pragma once
#include "Aircraft.h"
#include <vector>
struct RecordPool {
	Aircraft* object;
	bool inUse;
};

class AircraftPool {
private:
	static AircraftPool* instance;
	std::vector<RecordPool> recordPool;
	AircraftPool() {};
public:
	static AircraftPool* GetInstance();
	void AddAircraft(Aircraft* obj);
	Aircraft* GetAircraft(Point pos);
	void DeleteAircraft(Aircraft* obj);
};