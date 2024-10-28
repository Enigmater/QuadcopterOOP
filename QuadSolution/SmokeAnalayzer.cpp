#include "SmokeAnalayzer.h"

std::string SmokeAnalayzer::GetInfo()
{
	return  (rand() % 3 < 1) ? "There is smoke" : "There isn't smoke";
}

void SmokeAnalayzer::Add(ISensor* sensor)
{
	throw new std::exception("Not Impliment");
}

void SmokeAnalayzer::Remove(ISensor* sensor)
{
	throw new std::exception("Not Impliment");
}

void SmokeAnalayzer::AcceptVis(IVisitor* visitor)
{
	visitor->VisitSman();
}
