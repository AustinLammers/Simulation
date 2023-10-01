#pragma once
#include <iostream>

using namespace std;
class customerType {

public:
	customerType();
	customerType(int newID);
	friend ostream& operator<<(ostream& output, const customerType& customer);
	int getID();


private:
	int customerID;



};
