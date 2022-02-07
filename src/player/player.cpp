#include"player.hpp"

unsigned int Player::totalPlayers = 0;

Player::Player(std::string playerName){
    this->playerName = playerName;
    this->playerPosition = 0;
    this->playerId = totalPlayers++;
}

std::string Player::getPlayerName(){
    return playerName;
}