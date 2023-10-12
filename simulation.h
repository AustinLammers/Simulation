#pragma once
#include "station.h"


class simulation {
public:
	simulation();
	simulation(int,int);
	static void simFailure();
	void startSim();
	void update();
	void generateCustomer();


private:
	int numStations;
	station* stationArr;
	int simTime = 0;
	int totalRuntime;
	int customersCreated = 0;

};