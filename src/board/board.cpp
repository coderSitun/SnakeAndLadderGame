#include"board.hpp"

bool Board::detectLoop(unsigned int currentPosition, unsigned int nextPosition){
    unsigned int tempPosition;
    while((tempPosition = cells[nextPosition]->moveToNextPosition()) != maximumCells){
        if(currentPosition == tempPosition)
            return true;
        nextPosition = tempPosition;
    }
    return false;
}

Board::Board(unsigned int maximumCells){
    this->maximumCells = maximumCells;
    for(unsigned int index = 0; index < maximumCells; ++index){
        cells.push_back(new Cell(maximumCells));
    }
}

void Board::addSnake(unsigned int head, unsigned int tail){
    if((cells.size() > head) && (head > tail)){
        if(!detectLoop(head, tail)){
            cells[head]->setNextPosition(tail);
        }
    }
}

void Board::addLadder(unsigned int bottom, unsigned int top){
    if((cells.size() > top) && (top > bottom)){
        if(!detectLoop(bottom, top)){
            cells[bottom]->setNextPosition(top);
        }
    }
}

unsigned int Board::move(unsigned int currentPosition, unsigned int diceNumber){
    unsigned int nextPosition = currentPosition + diceNumber;
    if(nextPosition < cells.size()){
        unsigned int tempPosition;
        while((tempPosition = cells[nextPosition]->moveToNextPosition()) != maximumCells)
            nextPosition = tempPosition;
        return nextPosition;
    }
    else
        return currentPosition;    
}

Board::~Board(){
    for(unsigned int index = 0; index < cells.size(); ++index){
        delete cells[index];
    }
}