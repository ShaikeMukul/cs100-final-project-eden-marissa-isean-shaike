#include "../Headers/RegularMob.h"

void RegularMob::changeDamage(double lessenDamage){
    damage = damage - lessenDamage;
    if(damage < 0){
        damage = 0;
    }
}

void RegularMob::changeHealth(double damageReceived){
    health = health - damageReceived;
    if(health < 0){
        health = 0;
    }
}
RegularMob::RegularMob(){
    health = 0;
    damage = 0;
    name = "Undefined Monster";
    description = "Undefined Monster Description";
}

RegularMob::RegularMob(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput) {
    name = (nameInput);
    description = (descriptionInput);
    damage = abs(damageInput);
    health = abs(healthInput);
}

void RegularMob::setHealth(int level){
    int usedLevel;
    if(level < 1) usedLevel = 1;
    else if (level > 5) usedLevel = 5;
    else usedLevel = level;

    health = (static_cast<double>(usedLevel)/5)*70 + 60;

}

void RegularMob::setDamage(int level){
    int usedLevel;
    if(level < 1) usedLevel = 1;
    else if (level > 5) usedLevel = 5;
    else usedLevel = level;

    damage = (static_cast<double>(usedLevel)/5)*30 + 10;

}