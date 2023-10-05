#include "customerType.h"
#include "queueType.h"

class station {

public:
customerType getCustomer();
void updateCustomer();

station();

private:

queueType line;
int stationID;
std::string nickname;
int serviceTime;

};