#include "AircraftPool.h"

AircraftPool* AircraftPool::instance = nullptr;


AircraftPool* AircraftPool::GetInstance()
{
    if (instance == nullptr) {
        instance = new AircraftPool();
    }
    return instance;
}

void AircraftPool::AddAircraft(Aircraft* obj)
{
    for (auto it : recordPool) {
        if (it.object == obj) return;
    }
    recordPool.push_back(RecordPool{obj, false});
}

Aircraft* AircraftPool::GetAircraft(Point pos)
{
    for (auto it : recordPool) {
        if (!it.inUse) {
            int x = std::abs(it.object->pos.GetX() - pos.GetX());
            int y = std::abs(it.object->pos.GetY() - pos.GetY());
            if (x < 10 && y < 10) {
                it.inUse = true;
                return it.object;
            }
        }
    }
    return nullptr;
}

void AircraftPool::DeleteAircraft(Aircraft* obj)
{
    for (auto it : recordPool) {
        if (it.object == obj) {
            it.inUse = false;
            return;
        }
    }
}
