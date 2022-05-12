#ifndef ENTITIES_H
#define ENTITIES_H
#include <string>

class Entities{
    protected:
        int health = 0;
        int damage = 0;
        std::string name = 0;
        virtual int getHealth() = 0;
        virtual int getDamage() = 0;
        virtual std::string getName() = 0;
};

#endif