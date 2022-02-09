#include<iostream>
#include"game.hpp"

using namespace std;

int main(){
    Game game;
    unsigned int num, x, y;
    string name;

    //Adding Snakes
    cin >> num;
    for(unsigned int index = 0; index < num; ++index){
        cin >> x >> y;
        game.addSnake(x, y);
    }

    //Adding Ladders
    cin >> num;
    for(unsigned int index = 0; index < num; ++index){
        cin >> x >> y;
        game.addLadder(x, y);
    }

    //Adding Players
    cin >> num;
    for(unsigned int index = 0; index < num; ++index){
        cin >> name;
        game.addPlayer(name);
    }

    game.startGame();
    cout << "The winner is " << game.getWinner() << endl;

    return 0;
}