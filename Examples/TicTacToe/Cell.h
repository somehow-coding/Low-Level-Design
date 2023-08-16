#include <bits/stdc++.h>
using namespace std;

#ifndef CELL_H
#define CELL_H

class Cell {
    int empty;
    char piece;

public:
    Cell() : empty(1), piece(' ') {}

    void setPeice(char piece) {
        this->empty = 0;
        this->piece = piece;
    }

    char getPeice() {
        return piece;
    }

    int isEmpty() {
        return empty;
    }
};

#endif