#include "QuadcopterFactory.h"

Aircraft& QuadcopterFactory::GetQuadcopter(int id)
{
	std::map<int, Aircraft*>::const_iterator it = quads.find(id);
	if (quads.end() == it) {
		Aircraft* q;

		if (id % 2) {
			quad = q = new Quadcopter(id);
			std::cout << "The new Quadcopter! ";
		}
		else {
			q = new Threecopter(id);
			std::cout << "The new Threecopter!";
		}
		quads[id] = q;
		std::cout << "ID = " << id << std::endl; 
		return *q;
	}
	std::cout << "Aircraft with ID = " << id << " exists!" << std::endl;
	return *it->second;
}
