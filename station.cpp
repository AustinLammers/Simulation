#include "station.h"

customerType* station::getCustomer() {

    return currCustomer;
}

void station::updateCustomer() {


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