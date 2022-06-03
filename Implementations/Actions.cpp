#include "../Headers/Actions.h"
#include <cmath>

using namespace std;

Actions::~Actions() {}

Actions::Actions() {
    title = "error: no title";
    actionDescription = "error: no description";
    healthOutput = -999.9;
    damageOutput = -999.9;
}

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
