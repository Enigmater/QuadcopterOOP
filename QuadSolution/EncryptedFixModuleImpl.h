#pragma once
#include "FixationModuleImpl.h"
#include <iostream>
class EncryptedFixModuleImpl : public FixationModuleImpl
{
public:
	virtual void ReciveText();
	virtual void ReciveImage();
};

