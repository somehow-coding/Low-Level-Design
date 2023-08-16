#include <bits/stdc++.h>
using namespace std;

/*strategy is an interface*/

class Strategy {
public:
    virtual void drive() = 0;
};

class sportsDriveStrategy : public Strategy {
    void drive() {
        cout << "sports drive mode" << endl;
    }
};

class normalDriveStrategy : public Strategy {
    void drive() {
        cout << "normal drive mode" << endl;
    }
};

class vehicle {
public:
    Strategy *drive_str;
    vehicle(Strategy *drive_str) {
        this->drive_str = drive_str;
    }
    struct common_vehicle_properties {
        int color, price, speed;
        string name;
    };
    void drive() {
        drive_str->drive();
    }
};

class sportsVehicle : public vehicle {
public:
    sportsVehicle() : vehicle(new sportsDriveStrategy) {}
    struct sports_car_properties {};
};

class goodsVehicle : public vehicle {
public:
    goodsVehicle() : vehicle(new normalDriveStrategy) {}
    struct sports_car_properties {};
};

int main() {
    vehicle *f1_car = new sportsVehicle;
    f1_car->drive();
}