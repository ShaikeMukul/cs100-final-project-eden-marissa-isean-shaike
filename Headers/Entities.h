#ifndef ENTITIES_H
#define ENTITIES_H
#include <string>

#include "Actions.h"

class Entities{
    protected:
        double health;
        double damage;
        std::string name;
        std::string description;
        virtual void setHealth(int) = 0;
        virtual void setDamage(int) = 0;
    public:
        virtual double getHealth(){return health;}
        virtual double getDamage(){return damage;}
        virtual std::string getDescription(){return description;}
        virtual std::string getName() = 0;
        virtual std::string getTag() = 0;
        virtual void changeHealth(double) = 0;
        virtual void changeDamage(double) = 0;
};

#endif