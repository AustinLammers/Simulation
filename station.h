#pragma once
#include "customerType.h"
#include "queueType.h"

class station {

public:
    customerType* getCustomer();
    void setCustomer(customerType*);
    void updateCustomer();
    void queueCustomer(customerType);
    string getName();
    int getID();

    station();
    station(int ID, int time);
    station(int ID, int time, std::string name);
    station(int ID, int time, std::string name, int maxline);

private:

    queueType line;
    int stationID;
    std::string nickname;
    int serviceTime;
    customerType* currCustomer;
    int MAX_LINE;

};