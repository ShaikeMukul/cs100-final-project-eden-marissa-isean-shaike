#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <vector>

class Player{
protected:
	std::vector<Actions> potentActions;
        std::string name;
        int health;
        int level;
        std:: string description;
        bool levelUp();
    public:
        Player();
        std::string setName(std::string name);
        std::string getName();
        void changeHealth(double);
        void changeDamage(double);
        double getHealth();
        double getDamage();
};


#endif

