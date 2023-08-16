#include "Board.h"
#include "Player.h"

class Game {
    queue<Player> q;
    Board *board;

public:
    void boardConfig(int n) {
        board = new Board(n);
    }

    void addPlayers(Player &player) {
        q.push(player);
    }

    void startGame() {
        int result = 0;
        while (!result) {
            board->printBoard();
            auto player = q.front();
            q.pop();

            cout << player.playerName() << " make your move: "<<endl;
            player.makeMove(board);

            if (board->isWinnerFound()) {
                result = 1;
            }
            if (board->isTie()) {
                result = 1;
                cout << "Match got Tied " << endl;
            }
            q.push(player);
        }
    }
};