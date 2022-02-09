#ifndef __GAME
#define __GAME

#include<list>
#include"board.hpp"
#include"player.hpp"
#include"dice.hpp"

class Game{
private:
    enum GameStatus{
        IDLE,
        RUNNING,
        OVER
    };
    GameStatus status;
    Board *board;
    std::list<Player*> players;
    Dice *dice;
public:
    Game();
    void addPlayer(std::string playerName);
    void startGame();
    std::string getWinner();
    ~Game();
};

#endif