#ifndef __GAME
#define __GAME

#include<vector>
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
    std::vector<Player*> players;
    Dice *dice;
    unsigned int winnerId;
public:
    Game();
    void addPlayer(std::string playerName);
    void addSnake(unsigned int head, unsigned int tail);
    void addLadder(unsigned int bottom, unsigned int top);
    void startGame();
    std::string getWinner();
    ~Game();
};

#endif