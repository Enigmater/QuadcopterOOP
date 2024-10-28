#include "DataCollectionModule.h"

DataCollectionModule::DataCollectionModule()
{

}

DataCollectionModule::~DataCollectionModule()
{
}

void DataCollectionModule::Add(ISensor* sensor)
{
	sensors.Push(sensor);
}

void DataCollectionModule::Remove(ISensor* sensor)
{
	
}

std::string DataCollectionModule::GetInfo()
{
	std::string info = "";
	for (Container::MyIter it = sensors.Begin(); it != sensors.End(); it++) {
		info += (*it.Next())->GetInfo() + "\n";
	}
	return info;
}

void DataCollectionModule::AcceptVis(IVisitor* visitor)
{

}
