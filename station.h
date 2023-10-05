#include "customerType.h"
#include "queueType.h"

class station {

public:
customerType* getCustomer();
void updateCustomer();

station();
station(int ID, int time);
station(int ID, int time, std::string name);

private:

queueType line;
int stationID;
std::string nickname;
int serviceTime;
customerType* currCustomer;

};