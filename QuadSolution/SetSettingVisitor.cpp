#include "SetSettingVisitor.h"

void SetSettingVisitor::VisitTerm()
{
	std::cout << "Change setting for thermometer..." << std::endl;
}

void SetSettingVisitor::VisitSman()
{
	std::cout << "Change setting for smoke analyzer..." << std::endl;
}
