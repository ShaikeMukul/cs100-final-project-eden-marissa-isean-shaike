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
        BossMob(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput, Actions inputActions[10]);
        std::string getName() {return "-+- BOSS -+-    " + name;}
    protected:
        Actions currActions[10];

        void changeHealth(double); // decrease health by amount passed in
        void changeDamage(double); // decrease damage by amount passed in
        void setActions(Actions inputActions[]);
        Actions getAction(int);
        void setHealth(int);
        void setDamage(int);
};
#endif