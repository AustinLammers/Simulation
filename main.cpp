#include <iostream>
#include "queueType.h"

using namespace std;
int main() {
	
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

}