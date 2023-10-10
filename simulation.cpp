#include "simulation.h"
using namespace std;

simulation::simulation() {

numStations = 0;

}
simulation::simulation(int stations) {

    numStations = stations;
    stationArr = new station[numStations];
    for (int i = 0; i < numStations; i++) {
        string nick = "";
        int serve = 0;
        int mLine = 0;
        cout << "Enter Nickname for Station " << i + 1 << ":\n";
        cin >> nick;
        cout << "Enter Service Time for Station " << i + 1 << ":\n";
        cin >> serve;
        cout << "Enter Maximum Line for Statin " << i + 1 << ":\n";
        cin >> mLine;
        
        stationArr[i] = station(i + 1, serve, nick, mLine);

    }

}
void simulation::simFailure() {

    std::abort(); 


}