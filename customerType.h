#pragma once
#include <iostream>
#include "station.h"

using namespace std;
class customerType {

public:
	customerType();
	customerType(int newID);
	customerType(int newID, int pref, double strength);
	friend ostream& operator<<(ostream& output, const customerType& customer);
	int getID();
	station getCurrStation();


private:
	int customerID;
	//the amount of time spent at the current station
	int currTimeSpent;
	station currStation;
	int preference;
	double preferenceStrength;

};
