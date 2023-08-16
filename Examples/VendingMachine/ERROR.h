#include <bits/stdc++.h>
using namespace std;

class ERROR {
public:
    string invalidCode() {
        return "provide a valid code";
    }
    void invalidOperation() {
        cout << "invalid operation performed on Inventory" << endl;
    }
    void notEnoughCash() {
        cout << "not enough cash in the cash register" << endl;
    }
    void invalidButtonClicked() {
        cout << "invalid button pressed, click on correct button" << endl;
    }
    void state() {
        cout << "invalid state reached due to invalid clicks " << endl;
    }
    string lessMoney() {
        return "deposit more money";
    }
};