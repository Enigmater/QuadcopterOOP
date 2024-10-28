#include "Builder.h"

Builder::Builder()
{
	this->fmFactory = new FlyModFactory();
	this->cmFactory = new CollModFactory(new DataCollectionModule());
}

void Builder::SetFlyMod(IEngine* engine)
{
	fmFactory->CreateFlyMod(engine);
}

void Builder::SetDataCollMod(ISensor* sensor)
{
	cmFactory->AddSensor(sensor);
	cmFactory->CreateCollMod();
}

void Builder::SetWorker(FlyModFactory* fmFactory)
{
	this->fmFactory = fmFactory;
}

void Builder::SetWorker(CollModFactory* cmFactory)
{
	this->cmFactory = cmFactory;
}
