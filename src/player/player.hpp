#ifndef __PLAYER
#define __PLAYER

#include<string>

class Player{
private:
    unsigned int playerId;
    unsigned int playerPosition;
    std::string playerName;
public:
    Player(std::string playerName);
    std::string getPlayerName();
};

#endif