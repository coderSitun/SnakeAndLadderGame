#include"game.hpp"

Game::Game(){
    status = IDLE;
    board = new Board();
    dice  = new Dice();
}

void Game::addPlayer(std::string playerName){
    players.push_back(new Player(playerName));
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