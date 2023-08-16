#include "Game.h"

int main() {
    Game game;
    game.boardConfig(3);
    Player p1("abc", 'O');
    Player p2("xyz", 'X');
    game.addPlayers(p1);
    game.addPlayers(p2);
    game.startGame();
}