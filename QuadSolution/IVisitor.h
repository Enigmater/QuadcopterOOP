#pragma once
class IVisitor {
public:
	virtual void VisitTerm() = 0;
	virtual void VisitSman() = 0;
};