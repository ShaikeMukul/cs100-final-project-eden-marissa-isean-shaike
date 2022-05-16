#include "../Headers/Player.h"
#include <iostream>
#include <vector>

Player::Player() {
    className.push_back("CNAS");
    className.push_back("CHASS");
    className.push_back("BCOE");

    description.push_back("CNAS Description....................................");
    description.push_back("CHASS Description...............................");
    description.push_back("BCOE Description...............................");
}

double Player::getHealth(){

}

double Player::getDamage(){

}

void Player::setName(){
    std::cout << "Enter Your First Name: ";
    std::string fname;
    std::cin>>fname;
    std::cout << "Enter Your Last Name: ";
    std::string lname;
    std::cin>>lname;

    name = fname + '_' + lname;
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

