#pragma once
#include "ISensor.h"
#include "Aggregate.h"
#include <vector>
#include <iostream>

class DataCollectionModule : public ISensor
{
public:
	typedef Aggregate<ISensor*> Container;
private:
	Container sensors; 
public:
	DataCollectionModule();
	~DataCollectionModule();
	virtual void Add(ISensor* sensor);
	virtual void Remove(ISensor* sensor);
	virtual std::string GetInfo();
	virtual void AcceptVis(IVisitor* visitor);
};

