#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <vector>
#include "Entities.h"
#include "Inventory.h"

class Player : public Entities{
    protected:
        void setActions(Actions inputActions[]);
        int level;
    public:
        
        Player();
        Player(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput);

        virtual std::string getTag(){ return "Player";}
        virtual std::string setName(std::string name);
        virtual std::string getName();
        virtual void changeHealth(double);
        virtual void changeDamage(double);
        int getLevel(){return level;}
        virtual void setHealth(int);
        virtual void setDamage(int);
        void levelUp();
        Inventory currInventory;
        Actions currActions[10];
};


#endif

