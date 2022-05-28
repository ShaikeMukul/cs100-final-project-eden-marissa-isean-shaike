#ifndef ENTITIES_H
#define ENTITIES_H
#include <string>

class Entities{
    protected:
        double health;
        double damage;
        std::string name;
        std::string description;
    public:
        virtual double getHealth(){return health;}
        virtual double getDamage(){return damage;}
        virtual std::string getDescription(){return description;}
        virtual std::string getName() = 0;
        virtual void setHealth(int) = 0;
        virtual void setDamage(int) = 0;
};

#endif