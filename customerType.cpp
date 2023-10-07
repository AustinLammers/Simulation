#include "customerType.h"

using namespace std;

ostream& operator<<(ostream& output, customerType& customer)
{
    output << customer.getID();
    return output;
}

int customerType::getID() {

    return customerID;
}

customerType::customerType() {

    customerID = 0;
}

customerType::customerType(int newID) {

    customerID = newID;
}

customerType::customerType(int newID, int pref, double strength) {

customerID = newID;
preference = pref;
preferenceStrength = strength;
}