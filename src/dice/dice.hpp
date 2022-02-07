#ifndef __DICE
#define __DICE

class Dice{
private:
    unsigned int numberOfFaces;
public:
    Dice(unsigned int numberOfFaces);
    unsigned int rollDice();
};

#endif