#include "State.h"

class VendingMachine {
    Inventory *inventory;
    CashRegister *cash_register;
    State *state;

public:
    VendingMachine() {
        inventory = new Inventory();
        cash_register = new CashRegister();
        state = new IdealState();
    }

    ~VendingMachine() {
        delete inventory;
        delete cash_register;
        delete state;
    }
};

