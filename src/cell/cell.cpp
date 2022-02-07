#include"cell.hpp"

unsigned int Cell::moveToNextPosition(){
    return nextPosition;
}

void Cell::setNextPosition(unsigned int nextPosition){
    this->nextPosition = nextPosition;
}