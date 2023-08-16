#include <bits/stdc++.h>
using namespace std;

enum itemType {
    COKE,
    PEPSI,
    SODA,
};

class Item {
    itemType type;
    int price;

public:
    void setType(itemType t) { type = t; }

    itemType getType() { return type; }

    void setPrice(int p) { price = p; }

    int getPrice() { return price; }
};
