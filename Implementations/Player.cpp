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
void Player::setCollege() {
    std::cout << "Choose Your College: "<<std::endl;
    for(int i=0;i<className.size();i++){
        std::cout << "[" <<i <<"] "<<className[i] << std::endl;
    }
    int choice;

    std::cout<< "Enter your choice: ";
    std::cin>> choice;

    std::cout << "Your College is: "<< className[choice]<<std::endl;

    std::cout << "Description for " << className[choice] << ":" <<std::endl;
    std::cout << description[choice]<<std::endl;
}

