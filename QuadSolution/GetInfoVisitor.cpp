#include "GetInfoVisitor.h"

void GetInfoVisitor::VisitTerm()
{
	std::cout << "Get info from thermometer..." << std::endl;
}

void GetInfoVisitor::VisitSman()
{\
std::cout << "Get info from smoke analyzer..." << std::endl;
}
