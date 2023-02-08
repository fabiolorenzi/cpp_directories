#include "Player.h"

#include <iostream>

Player::Player(int _id, int _points, std::string _name) {
    this->id = _id;
    this->points = _points;
    this->name = _name;
}

int Player::playerFunc(int x, int y) {
    return x * y;
}