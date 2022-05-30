#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <vector>


class Player{
    private:
        std::string name;
        int health;
        int level;
        std:: string description;
        std::vector<Actions> potentActions;
        bool levelUp();
    public:
        Player();
        std::string setName(std::string name);
        std::string getName();
        void changeHealth(double);
        void changeDamage(double);
};


#endif

