#include <iostream>
#include "simulation.h"

using namespace std;
int main() {
	int numOfStations = 0;
	int simDuration = 0;
	cout << "Enter Duration of simulation: ";
	cin >> simDuration;
	cout << "Enter Number of stations: ";
	cin >> numOfStations;


	simulation sim(numOfStations, simDuration);

	sim.startSim();
	
	
}


/*
//queue Testing
	cout << "Queue Test:\n";
	queueType newQueue;
	customerType customer1(0, 0, 1.0);
	customerType customer2(1, 2, .75);
	customerType customer3(2, 3, .65);
	customerType customer4(3, 4, .56);
	customerType customer5(4, 6, .78);
	customerType customer6(5, 3, .24);

	newQueue.push(customer1);
	newQueue.print();
	
	newQueue.push(customer2);
	newQueue.print();
	newQueue.pop();
	newQueue.print();
	
	newQueue.push(customer3);
	newQueue.push(customer4);
	newQueue.push(customer5);
	newQueue.push(customer6);
	newQueue.print();
	newQueue.pop();
	newQueue.pop();
	newQueue.print();

	cout << "Customer Test:\n";
	int customerPref;
	double customerPrefStrength;
	int currcustomerID;

	currcustomerID = customer2.getID();
	customerPref = customer2.getPreference();
	customerPrefStrength = customer2.getPreferenceStrength();

	cout << "Customer 2 Stats: \nID: " << currcustomerID << "\nPref: " << customerPref << "\nStrength: " << customerPrefStrength << endl;
	customer3.getPrefPair(customerPref, customerPrefStrength);

	cout << "Customer Pair Retrieval:\nPref: " << customerPref << "\nStrength: " << customerPrefStrength << endl; 

	cout << "Customer Descision Making: station 70% full, and 6 total stations\n";
	cout << "Descision Made: " << customer4.makeDecision(.70, 6) << endl;

*/