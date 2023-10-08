#pragma once
#include <iostream>



using namespace std;
class customerType {

public:
	customerType();
	customerType(int newID);
	customerType(int newID, int pref, double strength);
	//friend ostream& operator<<(ostream& output, const customerType& customer);
	int getID();
	int getTimeSpent();
	int getPreference();
	double getPreferenceStrength();
	void getPrefPair(int& custPref, double& custPrefStrength);
	int makeDecision(int linePercent, int numStations);
	int randomChoice(int numStations);


private:
	int customerID;
	//the amount of time spent at the current station
	int currTimeSpent;
	//station currStation;
	int preference;
	double preferenceStrength;
	

};
