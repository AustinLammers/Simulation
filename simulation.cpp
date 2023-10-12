#include "simulation.h"
using namespace std;

simulation::simulation() {

numStations = 0;

}
simulation::simulation(int stations, int duration) {

    numStations = stations;
    stationArr = new station[numStations];
    totalRuntime = duration;
    for (int i = 0; i < numStations; i++) {
        string nick = "";
        int serve = 0;
        int mLine = 0;
        cout << "Enter Nickname for Station " << i + 1 << ":\n";
        cin >> nick;
        cout << "Enter Service Time for Station " << i + 1 << ":\n";
        cin >> serve;
        cout << "Enter Maximum Line for Station " << i + 1 << ":\n";
        cin >> mLine;
        
        stationArr[i] = station(i + 1, serve, nick, mLine);

    }

}
void simulation::simFailure() {
    cout << "The Simulation has encoutered a critical error and must terminate\n";
    std::abort(); 


}

void simulation::startSim() {

    cout << "SIMULATION STARTING...\nGENERATING INITIAL CUSTOMER....\n\n";
    generateCustomer();
    while(simTime < totalRuntime) {
        
        update();
    }
    
}

void simulation::generateCustomer() {
    customersCreated++;
    srand(time(NULL));
    int randPref = rand() % numStations;
    double randStrength = (rand() / 2) / (RAND_MAX / 2);
    customerType* tempCustomer = new customerType(customersCreated,randPref, randStrength);
    cout << "A new customer, Customer " << tempCustomer->getID() << " has entered the dining hall and is headed for the " << stationArr[tempCustomer->makeDecision(randPref, randStrength)].getName() << "(" << stationArr[tempCustomer->makeDecision(randPref, randStrength)].getID() << ") Station" << endl;
    stationArr[tempCustomer->makeDecision(randPref, randStrength)].queueCustomer(*tempCustomer);

}

void simulation::update() {

    simTime++;
    cout << "TIME ELAPSED: |" << simTime << "|\n";
    srand(time(NULL));
    int random = rand() % 2;
    
    if (random == 1) { 
        
        generateCustomer(); 
    }
    else {
        
        cout << "No one showed up recently.\n";
    }
    
    for (int i = 0; i < numStations; i++) stationArr[i].updateCustomer();

}