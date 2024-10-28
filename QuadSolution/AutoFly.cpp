#include "AutoFly.h"

void AutoFly::HandleRequest(std::string condition)
{
	if (condition == "Auto")
		std::cout << "Auto Fly" << std::endl;
	else if (successor != nullptr)
		successor->HandleRequest(condition);
}
