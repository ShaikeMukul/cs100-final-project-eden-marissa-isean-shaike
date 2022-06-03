#include "../Headers/Dungeon.h"

Dungeon::Dungeon(){
    currLevel = 1;
    currPlayer = nullptr;
    currEnemy = nullptr;
}

std::string Dungeon::getCurrEntities() {
    std::ostringstream output;
    output << "Player Name: " << currPlayer->getName() << std::endl;
    output << "Enemy: " << currEnemy->getName() << std::endl;
    return output.str();
}

void Dungeon::attack(Entities* attackedEntity){
    Entities* attackEntity = nullptr;
    if(attackedEntity == currEnemy){
        attackEntity = currPlayer;
    }
    else{
        attackEntity = currEnemy;
    }
    double damageDealth = attackedEntity->getDamage();
    attackedEntity->changeHealth(damageDealth);
    std::cout << attackEntity->getName() << " swiftly attacked " << attackedEntity->getName() << " for " << attackedEntity->getDamage() << ".\n"; 
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
