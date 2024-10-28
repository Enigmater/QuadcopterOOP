#pragma once
#include "IVisitor.h"
#include <iostream>
class GetInfoVisitor : public IVisitor{
public:
	virtual void VisitTerm();
	virtual void VisitSman();
};