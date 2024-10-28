#pragma once
#include <string>

class Handler {
protected:
	Handler* successor;
public:
	virtual void HandleRequest(std::string condition) = 0;
	void SetSuccessor(Handler* successor);
};