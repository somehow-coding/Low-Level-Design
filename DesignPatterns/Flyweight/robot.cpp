#include <bits/stdc++.h>
using namespace std;

class Robot {
public:
    virtual void display(int row, int col) = 0;
};

class Sprites {
    // 2d bitmap (grpahic element)
};

class RobiticDog : public Robot {
    Sprites body;
    string type;

public:
    RobiticDog(string type, Sprites body) : type(type), body(body) {}

    string getType() {}

    Sprites getBody() {}

    void display(int row, int col) {}
};

class HumanoidDog : public Robot {
    Sprites body;
    string type;

public:
    HumanoidDog(string type, Sprites body) : type(type), body(body) {}

    string getType() {}

    Sprites getBody() {}

    void display(int row, int col) {}
};

class RobotFactory {
    unordered_map<string, Robot *> robots;

public:
    Robot* getRobot(string type) {
        if (robots.count(type)) {
            return robots[type];
        }
        else {
            // create new robot depending upon type.
        }
    }
};