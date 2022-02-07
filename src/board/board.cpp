#include"board.hpp"

Board::Board(unsigned int maximumCells){
    for(unsigned int index = 0; index < maximumCells; ++index){
        cells.push_back(new Cell());
    }
}