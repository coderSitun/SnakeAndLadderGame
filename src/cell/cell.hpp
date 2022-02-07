#ifndef __CELL
#define __CELL

class Cell{
private:
    unsigned int nextPosition;
public:
    unsigned int moveToNextPosition();
    void setNextPosition(unsigned int nextPosition);
};

#endif