#ifndef REGULARMOB_H
#define REGULARMOB_H

#include "Entities.h"

class RegularMob : protected Entities{
    protected:
        std::string getName() {return name;}
        void changeHealth(double);
        void changeDamage(double);
};
#endif