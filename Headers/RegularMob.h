#ifndef REGULARMOB_H
#define REGULARMOB_H

#include "Entities.h"


class RegularMob : public Entities{
    public:
        RegularMob();
        RegularMob(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput);
        virtual std::string getTag(){return "RegularMob";}
        virtual std::string getName(){ return name;}
        virtual void changeHealth(double);
        virtual void changeDamage(double);
        virtual void setHealth(int);
        virtual void setDamage(int);
};
#endif