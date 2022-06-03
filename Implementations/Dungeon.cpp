#include "../Headers/Dungeon.h"

Dungeon::Dungeon(){
    currLevel = 1;
    currPlayer = nullptr;
    currREnemy = nullptr;
    currBEnemy = nullptr;
    boss = nullptr;
}

Dungeon::~Dungeon(){
    delete boss;
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
        if(boss){
            attackEntity = boss;
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
    std::cout << attackEntity->getName() << " swiftly attacked " << attackedEntity->getName() << " for " << attackEntity->getDamage() << ".\n"; 
}

Entities* Dungeon::getDeath() {
    if(currPlayer){
        if(currPlayer->getHealth()==0){
            return currPlayer;
        }
    }
    if(currREnemy){
        if(currREnemy->getHealth()==0){
            return currREnemy;
        }
    }
    if(boss){
        if(boss->getHealth()==0){
            return boss;
        }
    }
    return nullptr;

}

int Dungeon::getCurrLevel() {
    return level;
}
void Dungeon::nextFloor() {
    std::string choice = "";
    int randomNum = rand() % 8;
    Items potentialItems[8] = {Items("Consumable", "Health Potion", "Heals the player by 10 points.", 10,0), 
    Items("Consumable", "Health Potion", "Heals the player by 5 points.", 5,0),
    Items("Consumable", "Damage Potion", "Damages the you by 10 points.", -10, 0),
    Items("Consumable", "Damage Potion", "Damages the you by 5 points.", -5, 0),
    Items("Buff", "Damage Increase Potion", "Increase player's damage by 5 points.", 0, 5),
    Items("Debuff", "Damage Decrease Potion", "Increase player's damage by 10 points.", 0, 10),
    Items("None", "Rock", "Just a waste of space", 0, 0),
    Items("None", "Rock", "Just a waste of space", 0, 0),
    };
    Items newItem = potentialItems[randomNum];
    // std::cout << currInventory.getSize() << std::endl << std::endl << std::endl;
    if (level == 5) {
        std::cout << "HORRAY! You killed the " << currBEnemy->getName() << "!" << std::endl;
    }

    else {
        std::cout << "HORRAY! You killed the " << currREnemy->getName() << "!" << std::endl;
    }
    std::cout << "You also received " << newItem.getItemName() << "!" << std::endl;
    std::cout << "Would you like to this item before proceeding? Y/N" << std::endl;

    while ("N" != choice) {
        std::cin >> choice;
        if ("Y" == choice) {
            Inventory inventory = currPlayer->currInventory;

            if (newItem.getTag() == "Consumable") {
                if (newItem.getItemName() == "Health Potion") {
                    currPlayer->changeHealth(-5.0);
                    std::cout << "You heal for 5 points!" << std::endl;
                    choice = "N";
                    // inventory.removeItem(newItem.getItemName());
                }

                else if (newItem.getItemName() == "Damage Potion" && newItem.getHealthEffect() == -5) {
                    if (level == 5) {
                        currBEnemy->changeHealth(5.0);
                        std::cout << "You damaged the dead " << currBEnemy->getName() << "by 5 points!" << std::endl;
                        choice = "N";
                        // inventory.removeItem(newItem.getItemName());
                    }

                    else {
                        currREnemy->changeHealth(5.0);
                        std::cout << "You damaged the dead " << currREnemy->getName() << "by 5 points!" << std::endl;
                        choice = "N";
                        // inventory.removeItem(newItem.getItemName());
                    }
                }

                else if (newItem.getItemName() == "Damage Potion" && newItem.getHealthEffect() == -10) {
                    if (level == 5) {
                        currBEnemy->changeHealth(10.0);
                        std::cout << "You damaged the dead " << currBEnemy->getName() << "by 10 points!" << std::endl;
                        choice = "N";
                        // inventory.removeItem(newItem.getItemName());
                    }

                    else {
                        currREnemy->changeHealth(10.0);
                        std::cout << "You damaged the dead " << currREnemy->getName() << "by 10 points!" << std::endl;
                        inventory.removeItem(newItem.getItemName());
                        choice = "N";
                    }
                }
            }

            else if (newItem.getTag() == "Buff") {
                currPlayer->changeDamage(-10.0);
                std::cout << "You feel streangth course through your veins! Your damage increases by 10!" << std::endl;
                choice = "N";
                // inventory.removeItem(newItem.getItemName());
            }

            else if (newItem.getTag() == "Debuff") {
                if (level == 5) {
                    currBEnemy->changeDamage(10.0);
                    choice = "N";
                    // inventory.removeItem(newItem.getItemName());
                }

                else {
                    currREnemy->changeDamage(10.0);
                    choice = "N";
                    // inventory.removeItem(newItem.getItemName());
                }
                std::cout << "You sense the surrounding monsters grow weaker... Their damage decrease by 10!" << std::endl;
                choice = "N";
                // inventory.removeItem(newItem.getItemName());
            }

            else {
                std::cout << "It's just a rock." << std::endl;
                choice = "N";
                // inventory.removeItem(newItem.getItemName());
            }
            std::cout << inventory.printItems() << std::endl;
        }

        else if ("N" != choice) {
            std::cout << "Would you like to use an item before proceeding? Y/N" << std::endl;
        }
        else{
            currPlayer->currInventory.addItem(newItem);
        }
        
    }
    
    std::cout << "Proceeding to next floor..." << std::endl;

}
