#include "ManualFly.h"

void ManualFly::HandleRequest(std::string condition)
{
	if (condition == "Manual")
		std::cout << "Manual Fly" << std::endl;
	else if (successor != nullptr)
		successor->HandleRequest(condition);
}
