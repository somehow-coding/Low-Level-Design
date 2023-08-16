#include "Board.h"

class Player {
    string name;
    char piece;

public:
    Player(string name, char piece) {
        this->name = name;
        this->piece = piece;
    }

    void makeMove(Board *board) {
        int row, col, flag = 1;
        while (flag) {
            int val;
            cout << "Enter row: ";
            cin >> row;
            cout << "Enter column: ";
            cin >> col;
            if (board->canMarkCell(row, col)) {
                flag = 0;
                board->markCell(piece, row, col);
            }
            else {
                cout << "Error : Please Enter Correct Positon" << endl;
            }
        }
    }

    string playerName() {
        return name;
    }
};
