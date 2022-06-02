#include "../Headers/Player.h"
#include <iostream>

Player::Player() {
    this->name= "player";
    this->level = 0;
    this->damage = 0;
    this->health=0;
    this->description="This player is in the dark dungeon";
    
}

std::string Player::setName(std::string name){
    name = name;
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

bool Player::levelUp(){
    ++level;
    setHealth(level);
    setDamage(level);
}

void Player::setActions(Actions inputActions[10]){
    for(unsigned i = 0; i < 10; ++i){
        currActions[i] = inputActions[i];
    }
}

void Player::setHealth(int level){
    int usedLevel;
    if(level < 1) usedLevel = 1;
    else if (level > 5) usedLevel = 5;
    else usedLevel = level;

    health = (static_cast<double>(usedLevel)/5)*80 + 80;

}

void Player::setDamage(int level){
    int usedLevel;
    if(level < 1) usedLevel = 1;
    else if (level > 5) usedLevel = 5;
    else usedLevel = level;

    damage = (static_cast<double>(usedLevel)/5)*50 + 20;

}