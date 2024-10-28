#include "CelsiusToFahrenheitAdapter.h"

bool CelsiusToFareneitAdapter::CheckFire()
{
	return term->GetCelsiusInfo() * 1.8 + 32 > 85.0;
}
