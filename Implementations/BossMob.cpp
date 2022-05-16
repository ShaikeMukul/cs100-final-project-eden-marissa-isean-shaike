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
    health = 0;
    damage = 0;
    name = "Undefined Boss Monster";
    description = "Undefined Boss Monster Description";
}

BossMob::BossMob(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput) {
    name = (nameInput);
    description = (descriptionInput);
    damage = abs(damageInput);
    health = abs(healthInput);
}

void BossMob::setActions(Actions inputActions[10]){
    currActions = inputActions;
}