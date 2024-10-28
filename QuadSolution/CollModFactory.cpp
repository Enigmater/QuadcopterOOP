#include "CollModFactory.h"

DataCollectionModule* CollModFactory::CreateCollMod()
{
    std::cout << "Sensor added!" << std::endl;
    return dcm;
}

CollModFactory::CollModFactory(DataCollectionModule* dcm)
{
    this->dcm = dcm;
}

void CollModFactory::AddSensor(ISensor* sensor)
{
    dcm->Add(sensor);
}
