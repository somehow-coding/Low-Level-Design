#include "ERROR.h"
#include <bits/stdc++.h>
using namespace std;

ERROR error;

enum Coins {
    ONE,
    FIVE,
    TEN,
};

class CashRegister {
    vector<int> coinValues = {1, 5, 10};
    vector<int> countCoins;
    int totalCash = 0;

public:
    CashRegister() { countCoins = vector<int>(3, 0); }

    void addCoins(Coins coin) {
        totalCash += (coin + 1);
        countCoins[coin] += 1;
    }

    vector<int> getCoins(int amount) {
        if (amount > totalCash) {
            error.notEnoughCash();
        }
        vector<int> coins(3, 0);
        for (int i = 2; i >= 0 and amount > 0; --i) {
            int x = min(countCoins[i], amount / coinValues[i]);
            amount -= (x * coinValues[i]);
            totalCash -= (x * coinValues[i]);
            countCoins[i] -= x, coins[i] += x;
        }
        return coins;
    }

    int getBalance() {
        return totalCash;
    }
};