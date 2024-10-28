#include "FlyModFactory.h"

FlyModule* FlyModFactory::CreateFlyMod(IEngine* engine)
{
    std::cout << "Fly Module with engine created!" << std::endl;
    return new FlyModule(engine);
}
