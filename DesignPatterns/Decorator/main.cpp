#include <bits/stdc++.h>
using namespace std;

class BasePizza {
public:
    virtual int cost() = 0;
};

class ToppingDecorator : public BasePizza {
    int cost() {
        return 100;
    }
};

class ExtraCheese : public ToppingDecorator {
public:
    BasePizza *pizza;
    ExtraCheese(BasePizza *pizza) {
        this->pizza = pizza;
    }
    int cost() {
        return pizza->cost() + 10;
    }
};

class ExtraMushroom : public ToppingDecorator {
public:
    BasePizza *pizza;
    ExtraMushroom(BasePizza *pizza) {
        this->pizza = pizza;
    }
    int cost() {
        return pizza->cost() + 25;
    }
};

int main() {
    BasePizza *base_pizza = new ToppingDecorator;
    ExtraMushroom pizza(base_pizza);
    cout << pizza.cost();
}