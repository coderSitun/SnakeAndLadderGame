#include"cell.hpp"

Cell::Cell(unsigned int nextPosition){
    setNextPosition(nextPosition);
}

unsigned int Cell::moveToNextPosition(){
    return nextPosition;
}

void Cell::setNextPosition(unsigned int nextPosition){
    this->nextPosition = nextPosition;
}