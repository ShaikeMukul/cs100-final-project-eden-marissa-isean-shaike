#ifndef BOSSMOB_H
#define BOSSMOB_H
#include "Entities.h"

class BossMob : public Entities{
    public:
        BossMob();
        BossMob(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput, Actions inputActions[10]);
        virtual std::string getName() {return "-+- BOSS -+-    " + name;}
        virtual std::string getTag(){return "Boss";}
        Actions getAction(int);
    protected:
        Actions currActions[10];

        virtual void changeHealth(double); // decrease health by amount passed in
        virtual void changeDamage(double); // decrease damage by amount passed in
        void setActions(Actions inputActions[]);
        virtual void setHealth(int);
        virtual void setDamage(int);
};
#endif