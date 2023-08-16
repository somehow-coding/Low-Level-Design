#include "Item.h"

class ItemShelf {
    Item item;
    bool empty;

public:
    ItemShelf() {
        empty = 1;
    }

    bool isEmpty() { return empty; }

    void keepItem(Item item) { this->item = item; }

    Item getItem() { return item; }

    void removeItem() { empty = 1; }
};