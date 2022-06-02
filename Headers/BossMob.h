#ifndef BOSSMOB_H
#define BOSSMOB_H
#include "Entities.h"

//Stub implementation
class Actions{
    public:
        int healthEffect;
        int damageEffect;
        std::string actionDescrip;
        Actions() : healthEffect(-1), damageEffect(-2), actionDescrip("No Desc") {}
};
//END OF STUB

class BossMob : public Entities{
    public:
        BossMob();
        BossMob(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput);
        std::string getName() {return "-+- BOSS -+-    " + name;}
    protected:
        Actions currActions[10];

        void changeHealth(double);
        void changeDamage(double);
        void setActions(Actions inputActions[]);

};
#endif