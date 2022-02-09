#ifndef __BOARD
#define __BOARD

#include"cell.hpp"
#include<vector>

class Board{
private:
    unsigned int maximumCells;
    std::vector<Cell*> cells;
    bool detectLoop(unsigned int currentPosition, unsigned int nextPosition);
public:
    Board(unsigned int maximumCells = 100);
    void addSnake(unsigned int head, unsigned int tail);
    void addLadder(unsigned int bottom, unsigned int top);
    unsigned int move(unsigned int currentPosition, unsigned int diceNumber);
    ~Board();
};

#endif