#ifndef __BOARD
#define __BOARD

#include"cell.hpp"
#include<vector>

class Board{
private:
    std::vector<Cell*> cells;
public:
    Board(unsigned int maximumCells = 100);
    unsigned int move(unsigned int currentPosition, unsigned int diceNumber);
};

#endif