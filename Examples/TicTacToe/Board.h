#include "Cell.h"

#ifndef BOARD_H
#define BOARD_H

class Board {
    vector<vector<Cell>> board;
    int cellsFilled = 0;
    int n;

public:
    Board(int n) {
        this->n = n;
        board = vector<vector<Cell>>(n, vector<Cell>(n));
    }

    bool isTie() {
        return cellsFilled == (n * n);
    }

    bool isWinnerFound() {
        return 0;
    }

    bool canMarkCell(int row, int col) {
        return row >= 0 and row < n and col >= 0 and col < n and board[row][col].isEmpty();
    }

    void markCell(char mark, int row, int col) {
        cellsFilled++;
        board[row][col].setPeice(mark);
    }

    void printBoard() {
        for (int i = 0; i < n; ++i) {
            cout << "| ";
            for (int j = 0; j < n; ++j) {
                cout << board[i][j].getPeice() << " | ";
            }
            cout << endl;
        }
    }
};

#endif