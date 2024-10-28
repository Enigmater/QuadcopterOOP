#pragma once
#include "Handler.h"
#include <iostream>
class AutoFly : public Handler {
public:
	virtual void HandleRequest(std::string condition);
};