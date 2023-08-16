#include "ERROR.h"
#include "ItemShelf.h"

ERROR error;

class Inventory {
    unordered_map<int, ItemShelf> shelve;

public:
    Inventory() {}

    int validCode(int code) {
        return 100 <= code and code <= 160;
    }

    void addItem(int code, Item item) {
        if (!validCode) {
            throw error.invalidCode();
        }
        else if (!shelve[code].isEmpty()) {
            error.invalidOperation();
        }
        else {
            shelve[code].keepItem(item);
        }
    }

    Item getItem(int code, int money) {
        if (!validCode) {
            throw error.invalidCode();
        }
        else if (shelve[code].isEmpty()) {
            error.invalidOperation();
        }
        else {
            auto item = shelve[code].getItem();
            if (item.getPrice() > money) {
                throw error.lessMoney();
            }
            shelve[code].removeItem();
            return item;
        }
    }
};