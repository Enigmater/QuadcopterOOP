#pragma once
#include <iostream>
#include "IEngine.h"
#include "FlyModule.h"
#include "DataCollectionModule.h"
#include "Point.h"
#include "AircraftState.h"
#include "MementoState.h"
#include "ObserverPos.h"

class Aircraft
{
protected:
	int id;
	AircraftState* state;
	IObserver* observer;
public:
	FlyModule* flyModule;
	DataCollectionModule* dataCollectionModule;
	Point pos;
	Aircraft() {};
	Aircraft(FlyModule* flyModule, DataCollectionModule* dataCollectionModule);
	~Aircraft();

	void SetEngine(IEngine* enigne);
	void SetState(AircraftState* state);

	void ActionStart();	
	void ActionStop();
	void GetSensorInfo();
	void SetID(int id);
	std::string CheckEfficiency();
	virtual void Fly() {};
	virtual Aircraft* Clone() = 0;
	
	void SetMemento(MementoState* state);
	MementoState* CreateMemento();

	void AttachObs(IObserver* obs);
	void DettachObs(IObserver* obs);
	void Notify();
};

