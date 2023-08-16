#include <bits/stdc++.h>
using namespace std;

/***
 * AC is the dummy object.
 * AC is the receiver which receives request from the user(via remote controller).
 *
 */

class AC {
    int turnOn = 0, temperature;

public:
    void turnOnAC() {
        turnOn = 1;
        cout << "ac is turned ON" << endl;
    }

    void turnOffAC() {
        turnOn = 0;
        cout << "ac is turned OFF" << endl;
    }

    void setTempAC(int temp) {
        temperature = temp;
    }
};
