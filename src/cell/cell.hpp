#ifndef __CELL
#define __CELL

#include<limits>

class Cell{
private:
    unsigned int nextPosition;
public:
    Cell(unsigned int nextPosition = std::numeric_limits<unsigned int>::max());
    unsigned int moveToNextPosition();
    void setNextPosition(unsigned int nextPosition);
};

#endif