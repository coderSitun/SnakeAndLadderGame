#include"board.hpp"

Board::Board(unsigned int maximumCells){
    for(unsigned int index = 0; index < maximumCells; ++index){
        cells.push_back(new Cell());
    }
}

unsigned int Board::move(unsigned int currentPosition, unsigned int diceNumber){
    unsigned int nextPosition = currentPosition + diceNumber;
    if(nextPosition < cells.size()){
        unsigned int tempPosition;
        while((tempPosition = cells[nextPosition]->moveToNextPosition()) != std::numeric_limits<unsigned int>::max())
            nextPosition = tempPosition;
        return nextPosition;
    }
    else
        return currentPosition;    
}