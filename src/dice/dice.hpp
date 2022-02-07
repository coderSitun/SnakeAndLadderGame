#ifndef __DICE
#define __DICE

class Dice{
private:
    unsigned int numberOfFaces;
public:
    Dice(unsigned int numberOfFaces = 6);
    unsigned int rollDice();
};

#endif