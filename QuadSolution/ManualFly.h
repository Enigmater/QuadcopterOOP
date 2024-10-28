#pragma once
#include "Handler.h"
#include <iostream>
class ManualFly : public Handler {
public:
	virtual void HandleRequest(std::string condition);
};