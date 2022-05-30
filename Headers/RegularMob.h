#ifndef REGULARMOB_H
#define REGULARMOB_H

#include "Entities.h"


class RegularMob : public Entities{
    public:
        RegularMob();
        RegularMob(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput);
        std::string getName() {return name;}
        std::string getTag(){return "RegularMob";}
    protected:
        void changeHealth(double);
        void changeDamage(double);
        void setHealth(int);
        void setDamage(int);

};
#endif