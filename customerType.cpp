
#include "customerType.h"



/*ostream& operator<<(ostream& output, customerType& customer)
{
    output << customer.getID();
    return output;
}
*/

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
    currTimeSpent = 0;
}

int customerType::getTimeSpent() {

    return currTimeSpent;

}

int customerType::getPreference() {

    return preference;

}

double customerType::getPreferenceStrength() {


    return preferenceStrength;

}

void customerType::getPrefPair(int& custPref, double& custPrefStrength) {

    custPref = preference;
    custPrefStrength = preferenceStrength;


}

int customerType::makeDecision(double linePercent, int numStations) {

    //based on how full the line is, decide whether to join the line or find a random other line to join.
    if (linePercent <= preferenceStrength) {
        return preference;

    }
    else {

        return randomChoice(numStations);
    }


}

int customerType::randomChoice(int numStations) {
    srand(time(NULL));
    unsigned int random = rand() % numStations;
    if (random == preference) return ((random >> 1));
    else return random;


}

void customerType::incrementTimeSpent() {

    currTimeSpent += 1;
}