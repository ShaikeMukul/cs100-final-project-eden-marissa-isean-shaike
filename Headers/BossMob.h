#ifndef BOSSMOB_H
#define BOSSMOB_H
#include "Entities.h"

//Stub implementation
class Actions{
    public:
        int healthEffect = -1;
        int damageEffect = -2;
        std::string actionDescrip = "No Desc";
};
//END OF STUB

class BossMob : public Entities{
    public:
        BossMob();
        BossMob(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput);
        std::string getName() {return "-+- BOSS -+-    " + name;}
    protected:
        Actions currActions[10];

        void changeBossHealth(double);
        void changeBossDamage(double);
        void setActions(Actions inputActions[]);

};
#endif