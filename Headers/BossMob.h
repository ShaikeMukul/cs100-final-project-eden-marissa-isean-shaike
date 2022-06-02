#ifndef BOSSMOB_H
#define BOSSMOB_H
#include "Entities.h"


class BossMob : public Entities{
    public:
        BossMob();
        BossMob(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput, Actions inputActions[10]);
        std::string getName() {return "-+- BOSS -+-    " + name;}
        std::string getTag(){return "Boss";}
        Actions getAction(int);
    protected:
        Actions currActions[10];

        void changeHealth(double); // decrease health by amount passed in
        void changeDamage(double); // decrease damage by amount passed in
        void setActions(Actions inputActions[]);
        void setHealth(int);
        void setDamage(int);
};
#endif