#include "station.h"
using namespace std;
customerType* station::getCustomer() {

    return currCustomer;
}

void station::updateCustomer() {
    if (getCustomer() != NULL) {

        customerType* tempCust = getCustomer();
        tempCust->incrementTimeSpent();

        if (tempCust->getTimeSpent() >= serviceTime) {
            cout << "Customer " << currCustomer->getID() << " has left the " << this->getName() << "(" << this->getID() << ") Station" << endl;
            currCustomer = NULL;

        }

    }
    else if (line.getLength() > 0) { 
        customerType temp = line.pop();
        this->setCustomer(&temp);
        cout << "Customer " << currCustomer->getID() << " has entered the " << this->getName() << "(" << this->getID() << ") Station" << endl;
        this->updateCustomer();
    }
    else {
        cout << "The " << this->getName() << "(" << this->getID() << ") Station is currently empty!" << endl;
        return;

    }

 return;
}

station::station() {

    stationID = 0;
    nickname = "";
    serviceTime = 1;

}

station::station(int ID, int time) {

    stationID = ID;
    nickname = "";
    serviceTime = time;

}

station::station(int ID, int time, std::string name) {

    stationID = ID;
    nickname = name;
    serviceTime = time;

}

station::station(int ID, int time, std::string name, int maxline) {

    stationID = ID;
    nickname = name;
    serviceTime = time;
    MAX_LINE = maxline;
    currCustomer = NULL;

}

void station::queueCustomer(customerType cust) {

    line.push(cust);
}

void station::setCustomer(customerType* cust) {

    currCustomer = cust;
}

string station::getName() { 

    return nickname;
}

int station::getID() {

    return stationID;
}