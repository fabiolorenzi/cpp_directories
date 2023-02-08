#include <iostream>

#include "src/classes/Player.h"
#include "src/functions/Functions.h"

int main() {
    std::cout << "Hello world" << std::endl;
    std::cout << std::endl;
    std::cout << "Test func 1: " << testfunc(4, 7) << std::endl;
    std::cout << "Test func 2: " << testfunc(4, 7, 2) << std::endl;
    std::cout << std::endl;

    Player newPlayer = Player(1, 25, "Player1");

    std::cout << "Player ID: " << newPlayer.id << std::endl;
    std::cout << "Player points: " << newPlayer.points << std::endl;
    std::cout << "Player name: " << newPlayer.name << std::endl;
    std::cout << "Player function: " << newPlayer.playerFunc(2, 8) << std::endl;
    
    return 0;
}