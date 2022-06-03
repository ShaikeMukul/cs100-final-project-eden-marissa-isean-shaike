#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <vector>
#include "Entities.h"

class Player : public Entities{
    protected:
        void setActions(Actions inputActions[]);
        int level;
        void levelUp();
    public:
        Player();
        Player(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput);
        virtual std::string getTag(){ return "Player";}
        virtual std::string setName(std::string name);
        virtual std::string getName();
        void changeHealth(double);
        void changeDamage(double);
        int getLevel(){return level;}
        virtual void setHealth(int);
        virtual void setDamage(int);
	Actions currActions[10];
};


#endif

