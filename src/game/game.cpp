#include"game.hpp"

Game::Game(){
    status = IDLE;
    board = new Board();
    dice  = new Dice();
}