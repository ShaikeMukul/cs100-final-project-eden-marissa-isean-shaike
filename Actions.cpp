#include "Actions.h"

using namespace std;

Actions::~Actions() {}

void Actions::pLightAttack() {
    Player lightDmg;
    double totalDmg = lightDmg.getDamage();

    currEnemy.changeHealth(totalDmg);

    cout << "THWACK!! Your light attack did " << totalDmg << "damage!" << endl;
}

void Actions::rLightAttack() {
    RegularMob lightDmg;
    double totalDmg = lightDmg.getDamage();

    currPlayer.changeHealth(totalDmg);

    cout << "CLANG!!" << lightDmg.getName() << " deals " << totalDmg << " damage!" << endl;
}

void Actions::bLightAttack() {
    BossMob lightDmg;
    double totalDmg = lightDmg.getDamage();

    currPlayer.changeHealth(totalDmg);

    cout << "BOOM!! " << lightDmg.getName() << " deals " << totalDmg << " damage!" << endl;
}

void Actions::pHeavyAttack() {
    Player heavyDmg;
    double totalDmg = heavyDmg.getDamage();

    currEnemy.changeHealth(totalDmg);

    cout << "BAM!! Your heavy attack did " << totalDmg << "damage!" << endl;
}

void Actions::rHeavyAttack() {
    RegularMob heavyDmg;
    double totalDmg = heavyDmg.getDamage();

    currPlayer.changeHealth(totalDmg);

    cout << "BANG!!" << heavyDmg.getName() << " deals " << totalDmg << " damage!" << endl;
}

void Actions::bHeavyAttack() {
    BossMob heavyDmg;
    double totalDmg = heavyDmg.getDamage();

    currPlayer.changeHealth(totalDmg);

    cout << "CRUNCH!! " << heavyDmg.getName() << " deals " << totalDmg << " damage!" << endl;
}

void Actions::dodgeAction() { /*no clue how to obtain incoming dmg yet*/
    BossMob bMob;
    RegularMob rMob;

    

    cout << "You dodged the attack! You take 0 damage." << endl;
}

void Actions::healingAction(Player& health, Player healthMax) { 
    Items healthConsume;

    if (healthConsume.getTag() == "Consumable") {
        if ((health.getHealth() + 10) > healthMax) {
            health = healthMax;

            cout << "You heal for full! Your total hitpoints are now " << healthMax << "." << endl;
        }

        else {
            health.changeHealth(-10);

            cout << "You heal for 10 points! Your total hitpoints are now " << health.getHealth() << "." << endl;
        }
    }

    else {
        cout << "Cannot use that item to heal." << endl;
    }
}
