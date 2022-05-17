#include "../Headers/UserOutput.h"
#include <string>

std::string UserOutput::printMenu() {

}
std::string UserOutput::printInventory() {

}
std::string UserOutput::printEnding() {

}
std::string UserOutput::printAdvancement() {

}
std::string UserOutput::printScene(){
    std::cout << "Printing Scene: " << std::endl;
    std::cout << "Player Name : " << name << std::endl;
    std::cout << "Current Level : " << level << std::endl;
    std::cout << "Strength : " << strength << std::endl;
    std::cout << "Enemy : " << enemy << std::endl;
    std::cout << "Damage : " << damage << std::endl;
    std::cout << std::endl;
};
