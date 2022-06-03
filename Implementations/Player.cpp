#include "../Headers/Player.h"
#include <iostream>

Player::Player() {
    this->name= "player";
    this->level = 0;
    this->damage = 0;
    this->health=0;
    this->description="This player is in the dark dungeon";
    
}

Player::Player(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput){
    name = nameInput;
    description=descriptionInput;
    damage=damageInput;
    health=healthInput;
    level=0;
    currInventory = Inventory();
}

std::string Player::setName(std::string name){
    this->name = name;
    return name;
}

std::string Player::getName() {
    return name;
}

void Player::changeHealth(double damageReceived){
    health = health - damageReceived;
    if(health < 0){
        health = 0;
    }
    if(health > 160){
        health = 160;
    }
}

void Player::changeDamage(double lessenDamage){
   damage = damage - lessenDamage;
    if(damage < 0){
        damage = 0;
    }
    if(damage > 60){
        damage = 60;
    }
}

void Player::setHealth(int level){
    int usedLevel;
    if(level < 1) usedLevel = 1;
    else if (level > 5) usedLevel = 5;
    else usedLevel = level;

    health = (static_cast<double>(usedLevel)/5)*80 + 100;

}

void Player::setDamage(int level){
    int usedLevel;
    if(level < 1) usedLevel = 1;
    else if (level > 5) usedLevel = 5;
    else usedLevel = level;

    damage = (static_cast<double>(usedLevel)/5)*50 + 20;

}

void Player::levelUp(){
    std::cout << " \n\n You have leveled up !!! \n\n ";
    ++level;
    setHealth(level);
    setDamage(level);
}

void Player::setActions(Actions inputActions[10]){
    for(unsigned i = 0; i < 10; ++i){
        currActions[i] = inputActions[i];
    }
}
