#include "ConcreteAircraftFactory.h"

Quadcopter* ConcreteAircraftFactory::CreateQuad()
{
    FlyModule* fm = new FlyModule(new ElecticEngine("Engine 1"));
    DataCollectionModule* dcm = new DataCollectionModule();
    dcm->Add(new Thermometer("Thermometer 1"));
    dcm->Add(new SmokeAnalayzer("Smoke Analayzer 1"));
    return new Quadcopter(fm, dcm, "Quadcopter");
}

Threecopter* ConcreteAircraftFactory::CreateThree()
{
    FlyModule* fm = new FlyModule(new ElecticEngine("Engine 2"));
    DataCollectionModule* dcm = new DataCollectionModule();
    dcm->Add(new Thermometer("Thermometer 2"));
    dcm->Add(new SmokeAnalayzer("Smoke Analayzer 2"));
    return new Threecopter(fm, dcm);
}
