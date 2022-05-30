#include "../Headers/Player.h"
#include <iostream>

Player::Player() {
    this->name= "player";
    this->level = 0;
    this->damage = 0;
    this->health=0;
    this->description="This player is in the dark dungeon"
    
}

std::string Player::setName(std::string name){
    name = name;
}

std::string Player::getName() {
    return name;
}

void Player::changeHealth(){
}

void Player::changeDamage(){
}

bool Player::levelUp(){

}

