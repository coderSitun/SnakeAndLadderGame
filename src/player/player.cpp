#include"player.hpp"

Player::Player(std::string playerName){
    this->playerName = playerName;
}

std::string Player::getPlayerName(){
    return playerName;
}