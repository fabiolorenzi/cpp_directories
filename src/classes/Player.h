#pragma once

#include <iostream>

class Player {
    public:
        int id;
        int points;
        std::string name;
        Player(int _id, int _points, std::string _name);
        int playerFunc(int x, int y);
};