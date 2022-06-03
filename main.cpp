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
int main(){
    string inputName;
    string inputDesc;
    double inputDamage;
    double inputHealth;

    Actions bossActions[10] = {Actions("Attack","Regular attack",0,0),Actions("Dodge","Mostly dodges an attackers damage",-10,0), Actions("Magic Sheild","Mostly dodges an attackers damage",-5,0)};
    BossMob* boss = new BossMob("The Puppetmaster", "A powerful being with a lot of damage and health...", 120, 30, bossActions);
    
    RegularMob* mob1 = new RegularMob("Ancient Skeleton", "A bony enemy!", 60, 6);
    RegularMob* mob2 = new RegularMob("Boulders", "The surrounding rubble has come to life to fight!", 60, 10);
    RegularMob* mob3 = new RegularMob("Deranged Orange", "The science experiment that went to far", 80, 13);
    RegularMob* mob4 = new RegularMob("The Undead GuardDog", "Cute but packs a powerful bite!", 30, 20);
    

    //intro
    //get name and set
    //choose class

    if(/*Chass*/){
        inputDesc = "CHASS : A mighty warrior with high health but with low damage.";
        inputDamage = 13;
        inputHealth = 130;
    }
    else if(/*Bourns*/){
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
	
    int currMobLevel;

    for(int levelCounter = 0; levelCounter < 4 ; ++levelCounter){
        currMobLevel = rand() % 5 + 1;
        while(/*get getDeath() != nullptr*/){
            //print menu
            //player moves
            //enemy moves
        }
        // if(getDeath() == userPlayer)
            // levelCounter = 5;
            output death messages
        // ifgetdeath == enemy
        if(levelCounter%5==0){
            //level up the player
        }
    }


    
    // //determine if initial interaction with enemy, and if special item has already been used or not
	// //for (users health > 0)
	// //  if(users initial = 0)
	// //	then(initial interaction menu)
	// //  else
	// //  	go to regular interaction menu w/special item

	// //initial interaction
	// UserOutput output;
    // output.printInitialMenu();

    // UserInput initial;
    // string initialOption;
    // cout << " > ";
    // getline(cin, initialOption);

    // initial.setInput(initialOption);
    // initial.useItem(initialOption);
    // cout << endl;

	// //regular interaction w/special item available
	// UserOutput regWSpecItem;
    // regWSpecItem.printRegWSpecItem();

    // UserInput wSpecItem;
    // string specItemOption;
    // cout << " > ";
    // getline(cin, specItemOption);

    // wSpecItem.setInput(specItemOption);
    // wSpecItem.useItem(specItemOption);
    // cout << endl;

	// //regular interaction w/out special item available
	// UserOutput regNoSpecItem;
    // regNoSpecItem.printRegNoSpecItem();

    // UserInput noSpecItem;
    // string noSpecItemOption;
    // cout << " > ";
    // getline(cin, noSpecItemOption);

    // noSpecItem.setInput(noSpecItemOption);
    // noSpecItem.useItem(noSpecItemOption);
    // cout << endl;

    return 0;
}
