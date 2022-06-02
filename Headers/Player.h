#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <vector>
#include "Entities.h"

class Player : public Entities{
    protected:
	    Actions currActions[10];
        void setActions(Actions inputActions[]);
        int level;
        bool levelUp();
    public:
        Player();
        std::string setName(std::string name);
        std::string getName();
        void changeHealth(double);
        void changeDamage(double);
        int getLevel(){return level;}
        void setHealth(int);
        void setDamage(int);
};


#endif

