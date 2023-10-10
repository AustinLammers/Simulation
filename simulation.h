#pragma once
#include "station.h"


class simulation {
public:
	simulation();
	simulation(int);
	static void simFailure();


private:
	int numStations;
	station* stationArr;



};