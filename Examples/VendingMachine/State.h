#include "CashRegister.h"
#include "Inventory.h"
#include <bits/stdc++.h>
using namespace std;

#define err "invalid operation";

class State {
public:
    int cash_deposited;
    int item_code;
    int state_no;
    State *state;

    State() {
        state_no = 0;
        cash_deposited = 0;
        item_code = 0;
        state = nullptr;
    }

    virtual void clickOnDepositCoins() = 0;

    virtual void depositCoins(Coins coin, CashRegister *reg) = 0;

    virtual void clickOnSelectItem() = 0;

    virtual void selectItem(int code, Inventory *inv) = 0;

    virtual void clickOncancelButton() = 0;

    virtual vector<int> getRefund() = 0;

    virtual vector<int> getChange() = 0;

    virtual Item releaseItem() = 0;

    virtual vector<int> releaseCoins() = 0;
};

class DispensingState : public State {
public:
    void clickOnDepositCoins() {
    }
    void depositCoins(Coins coin, CashRegister *reg) { throw err; }

    void clickOnSelectItem() { throw err; }

    void selectItem(int code, Inventory *inv) { throw err; }

    void clickOncancelButton() { throw err; }

    vector<int> getRefund() { throw err; }

    vector<int> getChange() { throw err; }

    Item releaseItem() {
        return {};
    };

    vector<int> releaseCoins() {
        return {};
    }
};

class ReturnMoneyState : public State {
public:
    void clickOnDepositCoins() { throw err; }

    void depositCoins(Coins coin, CashRegister *reg) { throw err; }

    void clickOnSelectItem() { throw err; }

    void selectItem(int code, Inventory *inv) { throw err; }

    void clickOncancelButton() { throw err; }

    vector<int> getRefund() {
        return {};
    }

    vector<int> getChange() {
        return {};
    }

    Item releaseItem() { throw err; };

    vector<int> releaseCoins() { throw err; }
};

class SelectingState : public State {
public:
    void clickOnDepositCoins() { throw err; }

    void depositCoins(Coins coin, CashRegister *reg) { throw err; }

    void clickOnSelectItem() { throw err; }

    void selectItem(int code, Inventory *inv) {
    }

    void clickOnCancelButton() {
    }

    vector<int> getRefund() { throw err; }

    vector<int> getChange() { throw err; }

    Item releaseItem() { throw err; };

    vector<int> releaseCoins() { throw err; }
};

class DepositingState : public State {
    void clickOnDepositCoins() {}

    void depositCoins(Coins coin, CashRegister *reg) {
    }

    void clickOnSelectItem() {
    }

    void selectItem(int code, Inventory *inv) { throw err; }

    void clickOncancelButton() { throw err; }

    vector<int> getRefund() { throw err; }

    vector<int> getChange() { throw err; }

    Item releaseItem() { throw err; }

    vector<int> releaseCoins() { throw err; }
};

class IdealState : public State {
public:
    void clickOnDepositCoins() {
    }
    void depositCoins(Coins coin, CashRegister *reg) { throw err; }

    void clickOnSelectItem() { throw err; }

    void selectItem(int code, Inventory *inv) { throw err; }

    void clickOncancelButton() { throw err; }

    vector<int> getRefund() { throw err; }

    vector<int> getChange() { throw err; }

    Item releaseItem() { throw err; };

    vector<int> releaseCoins() { throw err; }
};
