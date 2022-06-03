#include "../Headers/Dungeon.h"

Dungeon::Dungeon(){
    currLevel = 1;
    currPlayer = nullptr;
    currREnemy = nullptr;
    currBEnemy = nullptr;
}

std::string Dungeon::getCurrEntities() {
    std::ostringstream output;
    output << "Player Name: " << currPlayer->getName() << std::endl;
    if(currREnemy){
        output << "Regular Enemy: " << currREnemy->getName() << std::endl;
    }
    else{
        output << "Boss Enemy: " << currBEnemy->getName() << std::endl;
    }
    return output.str();
}

void Dungeon::attack(Entities* attackedEntity){
    Entities* attackEntity = nullptr;
    if(attackedEntity == currPlayer){
        if(currBEnemy){
            attackEntity = currBEnemy;
        }
        else{
            attackEntity = currREnemy;
        }
    }
    else{
        attackEntity = currPlayer;
    }
    double damageDealth = attackEntity->getDamage();
    attackedEntity->changeHealth(damageDealth);
    std::cout << attackEntity->getName() << " swiftly attacked " << attackedEntity->getName() << " for " << attackedEntity->getDamage() << ".\n"; 
}

Entities* Dungeon::getDeath() {
    if(currPlayer->getHealth()==0){
        return currPlayer;
    }
    if(currREnemy->getHealth()==0){
        return currREnemy;
    }
    if(currBEnemy->getHealth()==0){
        return currBEnemy;
    }
    return nullptr;

}
void Dungeon::loadEnemy(RegularMob* mob1, BossMob* bossMob ){
    currBEnemy = bossMob;
    currREnemy = mob1;
}
int Dungeon::getCurrLevel() {
    return level;
}
void Dungeon::nextFloor() {
    std::string choice = "";
    srand(time(0));
    int randomNum = rand() % 8 + 1;
    Items potentialItems[8] = {Items("Consumable", "Health Potion", "Heals the player by 10 points.", 10,0), 
    Items("Consumable", "Health Potion", "Heals the player by 5 points.", 5,0),
    Items("Consumable", "Damage Potion", "Damages the enemy by 10 points.", -10, 0),
    Items("Consumable", "Damage Potion", "Damages the enemy by 5 points.", -5, 0),
    Items("Buff", "Damage Increase Potion", "Increase player's damage by 5 points.", 0, 5),
    Items("DeBuff", "Damage Decrease Potion", "Increase player's damage by 10 points.", 0, 10),
    Items("None", "Rock", "Just a waste of space", 0, 0),
    Items("None", "Rock", "Just a waste of space", 0, 0),
    };
    Items newItem = potentialItems[randomNum];
    currInventory.addItem(newItem);
    if (level == 5) {
        std::cout << "HORRAY! You killed the " << currBEnemy->getName() << "!" << std::endl;
    }

    else {
        std::cout << "HORRAY! You killed the " << currREnemy->getName() << "!" << std::endl;
    }
    std::cout << "You also received " << newItem.getItemName() << "!" << std::endl;
    std::cout << "Would you like to use an item before proceeding? Y/N" << std::endl;

    while ("N" != choice) {
        std::cin >> choice;
        if ("Y" == choice) {
            Inventory inventory = currPlayer->currInventory;
            inventory.printItems();

            if (newItem.getTag() == "Consumable") {
                if (newItem.getItemName() == "Health Potion") {
                    currPlayer->changeHealth(-5.0);
                    std::cout << "You heal for 5 points!" << std::endl;
                }

                else if (newItem.getItemName() == "Damage Potion" && newItem.getHealthEffect() == -5) {
                    if (level == 5) {
                        currBEnemy->changeHealth(5.0);
                        std::cout << "You damage the dead " << currBEnemy->getName() << "by 5 points!" << std::endl;
                    }

                    else {
                        currREnemy->changeHealth(5.0);
                        std::cout << "You damage the dead " << currREnemy->getName() << "by 5 points!" << std::endl;
                    }
                }

                else if (newItem.getItemName() == "Damage Potion" && newItem.getHealthEffect() == -10) {
                    if (level == 5) {
                        currBEnemy->changeHealth(10.0);
                        std::cout << "You damage the dead " << currBEnemy->getName() << "by 10 points!" << std::endl;
                    }

                    else {
                        currREnemy->changeHealth(10.0);
                        std::cout << "You damage the dead " << currREnemy->getName() << "by 10 points!" << std::endl;
                    }
                }
            }

            else if (newItem.getTag() == "Buff") {
                currPlayer->changeDamage(-10.0);
                std::cout << "You feel streangth course through your veins! Your damage increases by 10!" << std::endl;
            }

            else if (newItem.getTag() == "Debuff") {
                if (level == 5) {
                    currBEnemy->changeDamage(10.0);
                }

                else {
                    currREnemy->changeDamage(10.0);
                }
                std::cout << "You sense the surrounding monsters grow weaker... Their damage decrease by 10!" << std::endl;
            }

            else {
                std::cout << "It's just a rock." << std::endl;
            }
        }

        else if ("N" != choice) {
            std::cout << "Would you like to use an item before proceeding? Y/N" << std::endl;
        }
    }
    
    std::cout << "Proceeding to next floor..." << std::endl;

    Actions bossActions[10] = {Actions("Attack","Regular attack",0,0),Actions("Dodge","Mostly dodges an attackers damage",-10,0), Actions("Magic Sheild","Mostly dodges an attackers damage",-5,0)};
    BossMob* boss = new BossMob("The Puppetmaster", "A powerful being with a lot of damage and health...", 120, 30, bossActions);
    
    RegularMob* mob1 = new RegularMob("Ancient Skeleton", "A bony enemy!", 60, 6);
    RegularMob* mob2 = new RegularMob("Boulders", "The surrounding rubble has come to life to fight!", 60, 10);
    RegularMob* mob3 = new RegularMob("Deranged Orange", "The science experiment that went to far", 80, 13);
    RegularMob* mob4 = new RegularMob("The Undead GuardDog", "Cute but packs a powerful bite!", 30, 20);

    ++currLevel;
    if(currLevel == 2){
        loadEnemy(mob2,nullptr);
    }
    if(currLevel == 3){
        loadEnemy(mob3,nullptr);
    }
    if(currLevel == 4){
        loadEnemy(mob4,nullptr);
    }
    if(currLevel == 5){
        loadEnemy(nullptr,boss);
    }
}
