#include "Headers/Actions.h"
#include "Headers/BossMob.h"
#include "Headers/Entities.h"
#include "Headers/Inventory.h"
#include "Headers/Items.h"
#include "Headers/Player.h"
#include "Headers/Dungeon.h"
#include "Headers/RegularMob.h"
#include <random>

#include <iostream>
using namespace std;

void printInitialMenu(Entities* enemy, Entities* player) //used when user first interacts with enemy
        {
            	std::cout << "-------------------------------------------------------------------- ◆ Battle ◆ --------------------------------------------------------------------" << endl;
            	std::cout << endl;

            	std::cout << "   🟀 Your enemy is " << enemy->getName() << ". " << enemy->getDescription() << "\n\n";
                std::cout << "   🟀 Your health is " << player->getHealth() << "\n";
                std::cout << "   🟀 Your damage is " << player->getDamage() << "\n\n";

                std::cout << "   🟀 " << enemy->getName() << "\'s health is " << enemy->getHealth() << "\n";
                std::cout << "   🟀 " << enemy->getName() << "\'s damage is " << enemy->getDamage() << "\n\n";

                std::cout << "   🟀 Do you wish to fight them head on, or use a special item from your backpack?" << endl;
            	std::cout << "   🟀 Select an option, then press ENTER" << endl;
            	std::cout << endl;
            	std::cout << "   🟀 Actions:           " << endl;
            	std::cout << "       a - attack" << endl;
                std::cout << "       d - dodge" << endl;
        	    std::cout << "       i - use item" << endl;
	};



int main(){
    string inputName;
    string inputDesc;
    double inputDamage;
    double inputHealth;
    srand(time(0));

    
    std::cout << "-------------------------------------------------------------------- ◆ Welcome to The Dark Dungeon ◆ --------------------------------------------------------------------" << endl;
    std::cout << endl; 
    std::cout << "   🟀 Finally someone is here! Hello hero! What is your name?" << endl;
    std::cout << "    >";

    cin >> inputName;

    std::cout << "   🟀 Ahh "; //<< user.getName()  << ", what a fine name! And what college sent you here?" << endl;
    std::cout << "   🟀 Brace yourself " << inputName << " as the campus of UC Riverside depends on you to successfully traverse through the unknown: the tower nicknamed as  The Dark Dungeon..." << endl;
    std::cout << "   ..." << endl;
    std::cout << "   .." << endl;
    std::cout << "   ." << endl;

            std::cout << "   🟀 It is a dark and stormy night on the UCR campus... *CRACK* *BOOM* ..." << endl;
            std::cout << "   🟀 You find yourself standing in front of the Bell Tower, illuminated by the crackling lightning. In that split second where light fills the world, you see the entrance open, filled with strange sounds, inviting you to explore the mysterious interior." << endl;
            std::cout << "   🟀 Clutching the straps of your backpack tightly, you begin to make your way into the Bell Tower to see what horrors may await you." << endl;
    std::cout << "   ..." << endl;
            std::cout << "   .." << endl;
            std::cout << "   ." << endl;

            std::cout << "   🟀 As you walk through the entrance, you're encountered with pitch darkness. You turn on your phone flashlight and find a set of stairs in front of you. You shine your only source of light up the stairs, the end disappearing into the darkness above. Swallowing your fears down and questioning why you were chosen, you make your way up the stairs." << endl;
    std::cout << "   🟀 You think to yourself, \"Maybe this isn't so bad\": there hasnt been anything scary yet besides the occasional thunder roar and eerie sounds. But of course with your luck, you come face to face with a *enemy name*! " << endl;
    std::cout << "   🟀 Frozen in fear, you're not sure how to get out of this. Running away might end up worse for you: going back down the stairs could result in an ER trip for all you know. You fling your backpack to the ground, opening it swiftly, pulling out a..." << endl;
    std::cout << "    > " << endl;
    std::cout << "   🟀 You grip your weapon and move into a fighting stance as you prepare yourself for battle!" << endl;
    std::cout << endl;

    string input = "";
    while(input != "CHASS" && input != "CNAS" && input != "BOURNS" ){
        std::cout << "Please pick a class: CHASS | CNAS | BOURNS\n";
        cin >> input;
    }

    if(input == "CHASS"){
        inputDesc = "CHASS : A mighty warrior with high health but with low damage.";
        inputDamage = 13;
        inputHealth = 130;
    }
    else if(input == "BOURNS"){
        inputDesc = "Bourns : A stealth mercinary with high damage and medium health.";
        inputDamage = 24;
        inputHealth = 100;
    }
    else{//CNAS
        inputDesc = "CNAS : A alright warrior with medium damage and medium health";
        inputDamage = 21;
        inputHealth = 100;
    }
    Player* userPlayer = new Player(inputName, inputDesc, inputHealth, inputDamage);
    RegularMob* mob1 = new RegularMob("Ancient Skeleton", "A bony enemy!", 60, 6);
    RegularMob* mob2 = new RegularMob("Boulders", "The surrounding rubble has come to life to fight!", 60, 10);
    mob2->setHealth(static_cast<int>(rand()%1+1));
    RegularMob* mob3 = new RegularMob("Deranged Orange", "The science experiment that went to far", 80, 5);
    mob3->setHealth(static_cast<int>(rand()%3+1));
    RegularMob* mob4 = new RegularMob("The Undead GuardDog", "Cute but packs a powerful bite!", 30, 20);
    mob4->setDamage(static_cast<int>(rand()%2+1));
    BossMob* initalBoss = nullptr;
    int currMobLevel;

    Dungeon* mainDun = new Dungeon(userPlayer,initalBoss,mob1);

    string choice;
    int intCho;
    bool dodged = false;
    // for(int levelCounter = 0; levelCounter < 4 ; ++levelCounter){
        while(mainDun->getDeath() == nullptr){
            printInitialMenu(mainDun->currREnemy, userPlayer);
            cin >> choice;
            
            //player moves
            while(choice != "a" && choice != "d" && choice != "i"){
                if(mainDun->currBEnemy != nullptr){
                    printInitialMenu(mainDun->currBEnemy, userPlayer);
                }
                else{
                    printInitialMenu(mainDun->currREnemy, userPlayer);
                }
                cin >> choice;
            }
            if(choice == "a"){
                if(mainDun->currBEnemy == nullptr){
                    mainDun->attack(mainDun->currREnemy);
                }
                else{
                    mainDun->attack(mainDun->currBEnemy);
                }
                choice = " ";
            }
            else if(choice == "d"){
                userPlayer->changeHealth(5);
                std::cout << "You have dodged there attacked and but lost 5 health" << endl;
                dodged = true;
                choice = " ";
            }
            else{
                std::cout << userPlayer->currInventory.printItems() << std::endl;
                std::cout << "Pick an item to use, or type a random char to exit\n" << endl;
                cin >> intCho;
                while(cin.fail()){
                    std::cout << "Pick an item to use, or type a random char to exit\n" << endl;
                    cin.clear();
                    cin.ignore(256, '\n');
                    cin >> intCho;
                }
                if(intCho > 0 && userPlayer->currInventory.getSize() != 0){
                    Items gottenItem = userPlayer->currInventory.getItem(intCho);
                    userPlayer->currInventory.removeItem(gottenItem.getItemName());
                    std::cout << "\n\n #" << intCho << " has been consumed and applied.\n";
                }
                else{
                    std::cout << "You have exited the inventory menu.\n\n";
                    cin.clear();
                    cin.ignore(256, '\n');
                }
            }

            if(!dodged){
                if(mainDun->getDeath() == mainDun->currREnemy ){
                    // cout << "TEST 000" << endl;
                    mainDun->nextFloor();
                    // cout << "TEST 100" << endl;
                    // cout << mainDun->currLevel << endl;
                    mainDun->currLevel = mainDun->currLevel + 1;
                    // cout << mainDun->currLevel << endl;
                    if(mainDun->currLevel == 1){
                        // cout << "TEST 2" << endl;
                        delete mainDun->currREnemy;
                        mainDun->currREnemy = mob2;
                    }
                    else if(mainDun->currLevel == 2){
                        // cout << "TEST 3" << endl;
                        delete mainDun->currREnemy;
                        mainDun->currREnemy = mob3;
                    }
                    else if(mainDun->currLevel == 3){
                        // cout << "TEST 4" << endl;
                        delete mainDun->currREnemy;
                        mainDun->currREnemy = mob4;
                    }
                }
                else{
                    mainDun->attack(userPlayer);
                    if(mainDun->getDeath() == userPlayer){
                        delete userPlayer;
                        delete mainDun->currREnemy;
                        delete mainDun;
                        std::cout << "Oh no you died... GAME OVER ";
                        return 1;
                    }
                }
            }
            else{
                dodged = false;
            }
            // if(levelCounter%2==1){
            //     userPlayer->levelUp();
            // }
    }
    if(mainDun->getDeath() == userPlayer){
        delete userPlayer;
        delete mainDun->currREnemy;
        delete mainDun;
        std::cout << "Oh no you died... GAME OVER ";
        return 1;
    }
        // std::cout << levelCounter << endl;
    // }

    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    std::cout << "   🟀 The Puppetmaster slowy approachesm, you wonder if you can take it on.\n   🟀 However, before you can think you are in battle with it." << endl;



    //boss fight
    delete mainDun->currREnemy;
    mainDun->currREnemy = nullptr;
    cout << "Tests 1 ===============";

    choice = " ";
    intCho = 0;
    dodged = false;

    Actions bossActions[10] = {Actions("Attack","Regular attack",0,0),Actions("Dodge","Mostly dodges an attackers damage",-10,0), Actions("Magic Sheild","Mostly dodges an attackers damage",-5,0)};
    mainDun->boss = new BossMob("The Puppetmaster", "A powerful being with a lot of damage and health...", 120, 25, bossActions);
    mainDun->boss->setHealth(rand()%3);

    while(mainDun->getDeath() == nullptr){
            printInitialMenu(mainDun->boss, userPlayer);
            cin >> choice;
            
            //player moves
            while(choice != "a" && choice != "d" && choice != "i"){
                printInitialMenu(mainDun->boss, userPlayer);
                
                cin >> choice;
            }
            if(choice == "a"){
                mainDun->attack(mainDun->boss);
                
                choice = " ";
            }
            else if(choice == "d"){
                userPlayer->changeHealth(5);
                std::cout << "You have dodged there attacked and but lost 5 health" << endl;
                dodged = true;
                choice = " ";
            }
            else{
                std::cout << userPlayer->currInventory.printItems() << std::endl;
                std::cout << "Pick an item to use, or type a random char to exit\n" << endl;
                cin >> intCho;
                while(cin.fail()){
                    std::cout << "Pick an item to use, or type a random char to exit\n" << endl;
                    cin.clear();
                    cin.ignore(256, '\n');
                    cin >> intCho;
                }
                if(intCho > 0 && userPlayer->currInventory.getSize() != 0){
                    Items gottenItem = userPlayer->currInventory.getItem(intCho);
                    userPlayer->currInventory.removeItem(gottenItem.getItemName());
                    std::cout << "\n\n #" << intCho << " has been consumed and applied.\n";
                }
                else{
                    std::cout << "You have exited the inventory menu.\n\n";
                    cin.clear();
                    cin.ignore(256, '\n');
                }
            }

            if(!dodged){
                if(mainDun->getDeath() == mainDun->boss ){
                    std::cout << "Puppetmaster: So you have defeated me it seems. Well done my soilder, well done ...."<< std::endl;     
                    return 1;  
                }
                else{
                    //boss attacks
                    // Actions bossActions[10] = {Actions("Attack","Regular attack",0,0),Actions("Heals","Mostly dodges an attackers damage",-10,0), Actions("Magic Sheild","Mostly dodges an attackers damage",-5,0)};
                    // BossMob* boss = new BossMob("The Puppetmaster", "A powerful being with a lot of damage and health...", 120, 30, bossActions);
                    srand(time(0));
                    Actions currAction = mainDun->boss->currActions[static_cast<int>(rand()%3)];
                    if(currAction.getTitle() == "Attack"){
                        mainDun->attack(userPlayer);
                    }
                    else if(currAction.getTitle() == "Heals"){
                        std::cout << "The Puppetmaster sees it wise to heal himself by 5 points.\n\n";
                        mainDun->boss->changeHealth(-5);
                    }
                    else{
                        if(mainDun->boss->getDamage()<=10){
                            mainDun->attack(userPlayer);
                        }
                        else{
                            std::cout << "The Puppetmaster sees it wise to trade damage for health.\n\n";
                            mainDun->boss->changeDamage(5);
                            mainDun->boss->changeHealth(-10);
                        }
                    }
                    if(mainDun->getDeath() == userPlayer){
                        delete userPlayer;
                        delete mainDun;
                        std::cout << "Oh no you died... GAME OVER ";
                        return 1;
                    }
                }
            }
            else{
                dodged = false;
            }
    }


    std::cout << "\n\nHad fun? Play again by running the file again...\n"<< endl;
    std::cout << "\nMade By:\n\tIsean Bhanot\n\tEden Fraczkiewicz\n\tShaike Mukul\n\tMarissa Valencia\n\n";

    

    delete userPlayer;
    delete mainDun;
    return 0;
}
