#include"game.hpp"

Game::Game(){
    status = IDLE;
    board = new Board();
    dice  = new Dice();
}

void Game::addPlayer(std::string playerName){
    players.push_back(new Player(playerName));
}

void Game::addSnake(unsigned int head, unsigned int tail){
    board->addSnake(head, tail);
}

void Game::addLadder(unsigned int bottom, unsigned int top){
    board->addSnake(bottom, top);
}

std::string Game::getWinner(){
    switch(status)
    {
        case IDLE:
            break;
        case RUNNING:
            break;
        case OVER:
            return players[winnerId]->getPlayerName();
    }
    return "";
}

Game::~Game(){
    delete board;
    delete dice;
}