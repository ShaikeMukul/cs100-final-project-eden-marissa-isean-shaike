#include "../Headers/BossMob.h"

void BossMob::changeDamage(double lessenDamage){
    damage = damage - lessenDamage;
    if(damage < 0){
        damage = 0;
    }
}

void BossMob::changeHealth(double damageReceived){
    health = health - damageReceived;
    if(health < 0){
        health = 0;
    }
}


BossMob::BossMob(){
    name = "Error: default constructor";
    description = "NULL";
    damage = -1;
    health = -1;
    Actions inputActions[10] = {Actions("Error", "Error",-1.2,-2),Actions("Error", "Error",-1,-2),Actions("Error", "Error",-1,-2),Actions("Error", "Error",-1,-2),Actions("Error", "Error",-1,-2),Actions("Error", "Error",-1,-2),Actions("Error", "Error",-1,-2),Actions("Error", "Error",-1,-2),Actions("Error", "Error",-1,-2),Actions("Error", "Error",-1,-2)};
    setActions(inputActions);
}

BossMob::BossMob(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput, Actions inputActions[10]) {
    name = (nameInput);
    description = (descriptionInput);
    damage = abs(damageInput);
    health = abs(healthInput);
    this->setActions(inputActions);
}

void BossMob::setActions(Actions inputActions[10]){
    for(unsigned i = 0; i < 10; ++i){
        currActions[i] = inputActions[i];
    }
}

Actions BossMob::getAction(int index){
    if(index > 9){return currActions[9];}
    if(index < 0){return currActions[0];}
    return currActions[index];
}

void BossMob::setHealth(int level){
    int usedLevel;
    if(level < 1) usedLevel = 1;
    else if (level > 5) usedLevel = 5;
    else usedLevel = level;

    health = (static_cast<double>(usedLevel)/5)*140 + 100;
}

void BossMob::setDamage(int level){
    int usedLevel;
    if(level < 1) usedLevel = 1;
    else if (level > 5) usedLevel = 5;
    else usedLevel = level;

    damage = (static_cast<double>(usedLevel)/5)*30 + 30;
}