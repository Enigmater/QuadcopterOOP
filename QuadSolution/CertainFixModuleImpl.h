#pragma once
#include "FixationModuleImpl.h"
#include <iostream>
class CertainFixModuleImpl : public FixationModuleImpl
{
public:
	virtual void ReciveText();
	virtual void ReciveImage();
};

