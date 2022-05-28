#include "Actions.h"
#include <string>

using namespace std;

Actions::~Actions() {}

/*work in progress*/

void PlayerActions::lightAttack(Entities& lightDmg) {  /*each college will possibly have different set amounts of health and damage,*/ 
    Player collegeType;                                /*so in this instance, CNAS does less damage but will have more health, BCOE
                                                         does more damage but has less health, and CHASS is in the middle for both*/
    if (collegeType.get_college() == "CNAS") {
        lightDmg -= 2;
    }

    else if (collegeType.get_college() == "BCOE") {
        lightDmg += 2;
    }

    else {
        lightDmg == lightDmg;
    }

    cout << "THWACK!! Your light attack did " << lightDmg << "damage!" << endl;
}

void PlayerActions::heavyAttack(Entities& heavyDmg) {
    Player collegeType;

    if (collegeType.get_college() == "CNAS") {
        heavyDmg -= 2;
    }

    else if (collegeType.get_college() == "BCOE") {
        heavyDmg += 2;
    }

    else {
        heavyDmg == heavyDmg;
    }

    cout << "BAM!! Your heavy attack did " << heavyDmg << "damage!" << endl;
}

void PlayerActions::dodgeAction(Entities& incomingDmg) { /*possibly change to BossMob& dmg and RegularMob& dmg*/
    incomingDmg = 0;

    cout << "You dodged the attack! You take 0 damage." << endl;
}

void PlayerActions::healingAction(Entities& health) {
    Items healthConsume;

    if (healthConsume.getTag() == "Consumable") {
        health += 5;

        cout << "You heal for 5 points! Your total hitpoints are now " << health << "." << endl;
    }

    else {
        cout << "Cannot use that item to heal." << endl;
    }
}

void EnemyActions::lightAttack(Entities& dmg) {
    BossMob bossMob;
    RegularMob regularMob;

    if (/*insert boss mob identifier here*/) {
        dmg += 2;

        cout << "BOOM!! " << bossMob->name << " deals " << dmg << " damage!" << endl;
    }

    else {
        dmg == dmg;

        cout << "CLANG!!" << regularMob->name << " deals " << dmg << " damage!" << endl;
    }

}

void EnemyActions::heavyAttack(Entities& dmg) {
    BossMob bossMob;
    RegularMob regularMob;

    if (/*insert boss mob identifier here*/) {
        dmg += 2;

        cout << "CRUNCH!! " << bossMob->name << " deals " << dmg << " damage!" << endl;
    }

    else {
        dmg == dmg;

        cout << "BANG!!" << regularMob->name << " deals " << dmg << " damage!" << endl;
    }
}
