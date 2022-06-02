#include "../Headers/Dungeon.h"

Dungeon::Dungeon(){
    currLevel = 1;
    currPlayer = nullptr;
    currEnemy = nullptr;
}
Dungeon::~Dungeon(){
    delete currPlayer;
    delete currEnemy;
}

std::string Dungeon::getCurrEntities() {
    std::ostringstream output;
    output << "Player Name: " << currPlayer->getName() << std::endl;
    output << "Enemy: " << currEnemy->getName() << std::endl;
}

void Dungeon::attack(Entities* ){
    
}

Entities* Dungeon::getDeath() {
    if(currPlayer->getHealth()==0){
        return currPlayer;
    }
    if(currEnemy->getHealth()==0){
        return currEnemy;
    }
    return nullptr;

}
void Dungeon::loadEnemy(){

}
int Dungeon::getCurrLevel() {
    return level;
}
void Dungeon::nextFloor() {

}
