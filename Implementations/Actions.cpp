#include "Actions.h"

using namespace std;

Actions::~Actions() {}

Actions::Actions(string name, string description, double health, double damage) {
    title = (name);
    actionDescription = (description);
    healthOutput = (health);
    damageOutput = (damage);
}

string Actions::getActionDescription() {
    return actionDescription;
}

double Actions::getHealthOutput() {
    return healthOutput;
}

double Actions::getDamageOutput() {
    return damageOutput;
}

string Actions::getTitle() {
    return title;
}
