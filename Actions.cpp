#include "Actions.h"

using namespace std;

Actions::~Actions() {}

/*work in progress*/
/*each college will possibly have different set amounts of health and damage, 
so in this instance, CNAS does less damage but will have more health, BCOE
does more damage but has less health, and CHASS is in the middle for both*/

void PlayerActions::lightAttack() {
    Player collegeType;
    Player lightDmg;
    double totalDmg = 0;

    if (collegeType.get_college() == "CNAS") {
        totalDmg = lightDmg.getDamage() - 2;
    }

    else if (collegeType.get_college() == "BCOE") {
        totalDmg = lightDmg.getDamage() + 2;
    }

    else {
        totalDmg = lightDmg.getDamage();
    }

    cout << "THWACK!! Your light attack did " << totalDmg << "damage!" << endl;
}

void PlayerActions::heavyAttack() {
    Player collegeType;
    Player heavyDmg;
    double totalDmg = 0;

    if (collegeType.get_college() == "CNAS") {
        totalDmg = heavyDmg.getDamage() - 2;
    }

    else if (collegeType.get_college() == "BCOE") {
        totalDmg = heavyDmg.getDamage() + 2;
    }

    else {
        totalDmg = heavyDmg.getDamage();
    }

    cout << "BAM!! Your heavy attack did " << totalDmg << "damage!" << endl;
}

void PlayerActions::dodgeAction() { /*no clue how to obtain incoming dmg yet*/
    incomingDmg = 0;

    cout << "You dodged the attack! You take 0 damage." << endl;
}

void PlayerActions::healingAction(Player& health, Player healthMax) {
    Items healthConsume;
    double totalHealth = 0;

    if (healthConsume.getTag() == "Consumable") {
        if (health.getHealth() + 5 > healthMax) {
            health = healthMax;
            cout << "You heal for full! Your total hitpoints are now " << healthMax << "." << endl;
        }

        else {
            totalHealth = health.getHealth() + 5;
            cout << "You heal for 5 points! Your total hitpoints are now " << totalHealth << "." << endl;
        }
    }

    else {
        cout << "Cannot use that item to heal." << endl;
    }
}

void EnemyActions::lightAttack() {
    BossMob blightDmg;
    RegularMob rlightDmg;

    if (/*insert boss mob identifier here*/) {
        cout << "BOOM!! " << blightDmg.getName() << " deals " << blightDmg.getDamage() += 2 << " damage!" << endl;
    }

    else {
        cout << "CLANG!!" << rlightDmg.getName() << " deals " << rlightDmg.getDamage(); << " damage!" << endl;
    }

}

void EnemyActions::heavyAttack() {
    BossMob bheavyDmg;
    RegularMob rheavyDmg;

    if (/*insert boss mob identifier here*/) {
        cout << "CRUNCH!! " << bheavyDmg.getName() << " deals " << bheavyDmg.getDamage() += 2 << " damage!" << endl;
    }

    else {
        cout << "BANG!!" << rheavyDmg.getName() << " deals " << rheavyDmg.getDamage() << " damage!" << endl;
    }
}
