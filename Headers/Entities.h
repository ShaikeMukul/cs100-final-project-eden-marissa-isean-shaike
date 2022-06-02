#ifndef ENTITIES_H
#define ENTITIES_H
#include <string>

//Stub implementation
class Actions{
    public:
        int healthEffect;
        int damageEffect;
        std::string actionDescrip;
        Actions() : healthEffect(-1), damageEffect(-2), actionDescrip("No Desc") {}
};
//END OF STUB

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
};

#endif