#pragma once
#include "IVisitor.h"
#include <iostream>
class SetSettingVisitor : public IVisitor {
public:
	virtual void VisitTerm();
	virtual void VisitSman();
};