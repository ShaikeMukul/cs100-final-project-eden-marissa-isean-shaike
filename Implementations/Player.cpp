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
}

void Player::changeDamage(double lessenDamage){
   damage = damage - lessenDamage;
     if(damage < 0){
        damage = 0;
    }
}

bool Player::levelUp(){
    ++level;
    setHealth(level);
    setDamage(level);
}
double getHealth(){
    return health;
}

double getDamage(){
    return damage;
}
