#include <iostream>
#include "Solution.h"
#include "Quadcopter.h"
#include "AircraftProxy.h"
#include "FlyModule.h"
#include "DataCollectionModule.h"
#include "ElecticEngine.h"
#include "Thermometer.h"
#include "SmokeAnalayzer.h"
#include "FireDetectionModule.h"
#include "CelsiusToFahrenheitAdapter.h"
#include "FixationModule.h"
#include "CertainFixModuleImpl.h"
#include "EncryptedFixModuleImpl.h"
#include "CertainFixationModule.h"
#include "QuadcopterFactory.h"

#include "SensorCreator.h"
#include "TherCreator.h"
#include "SmAnCreator.h"

#include "AircraftOn.h"
#include "AircraftOff.h"
#include "AircraftDataColl.h"

#include "MementoState.h"
#include "ObserverPos.h"

#include "Invoker.h"
#include "CommandGetInfo.h"
#include "CommandSetSetting.h"

#include "ManualFly.h"
#include "AutoFly.h"
#include "Handler.h"

#include "GetInfoVisitor.h"
#include "SetSettingVisitor.h"

int main()
{
	srand(time(0));
	ElecticEngine* elecEng = new ElecticEngine("Electric engine EE9001");
	FlyModule* flyMod = new FlyModule(elecEng);

	DataCollectionModule* dataCollMod = new DataCollectionModule();

	// FACTORY METHOD
	SmAnCreator smokeCr;
	dataCollMod->Add(smokeCr.Create("Smoke Analyzer"));
	TherCreator thermCr;
	dataCollMod->Add(thermCr.Create("ThermSensor TS3091"));

	//Quadcopter* quad = new Quadcopter(flyMod, dataCollMod, "Quadcopter FLY");

	//// STATE
	//std::cout << "STATE\n\n";
	//AircraftState* state = new AircraftOff();
	//quad->SetState(state);
	//quad->ActionStart();
	//std::cout << std::endl;
	//quad->ActionStart();
	//std::cout << std::endl;
	//quad->ActionStop();
	//quad->GetSensorInfo();
	//std::cout << std::endl;
	//quad->ActionStart();
	//quad->GetSensorInfo();

	//// MEMENTO
	//std::cout << "MEMENTO\n\n";
	//MementoState* mement = quad->CreateMemento();
	//std::cout << "Save state!" << std::endl;
	//quad->ActionStop();
	//std::cout << "Change state of drone!" << std::endl;
	//quad->SetMemento(mement);
	//std::cout << "Load state!\n" << std::endl;

	//// OBSERVER
	//std::cout << "OBSERVER\n\n";
	//IObserver* obs = new ObserverPos();
	//quad->AttachObs(obs);
	//for (int i = 100; i < 200; i += 10) {
	//	quad->pos.SetX(i);
	//	quad->pos.SetY(i);
	//	quad->Notify();
	//}

	// COMMAND
	std::cout << "COMMAND\n\n";
	CommandGetInfo* cmdInf = new CommandGetInfo(thermCr.Create("Therm"));
	Invoker* inv = new Invoker(cmdInf);
	inv->Execute();
	cmdInf->SetSensor(smokeCr.Create("SmokeAn"));
	inv->Execute();
	std::cout << std::endl;

	// CHAIN OF RESPONSIBILITY
	std::cout << "CHAIN OF RESPONSIBILITY\n\n";
	Handler* manual = new ManualFly();
	Handler* autofl = new AutoFly();
	manual->SetSuccessor(autofl);
	manual->HandleRequest("Manual");
	manual->HandleRequest("Auto");
	autofl->HandleRequest("Manual");
	autofl->HandleRequest("Auto");
	std::cout << std::endl;

	// VISITOR
	std::cout << "VISITOR\n\n";
	GetInfoVisitor* infVis = new GetInfoVisitor();
	SetSettingVisitor* settingVis = new SetSettingVisitor();
	ISensor* term = thermCr.Create("Therm");
	term->AcceptVis(infVis);
	term->AcceptVis(settingVis);
	ISensor* sman = smokeCr.Create("Smoke");
	sman->AcceptVis(infVis);
	sman->AcceptVis(settingVis);
}
