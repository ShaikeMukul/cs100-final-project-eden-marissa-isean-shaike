#include "Headers/Actions.h"
#include "Headers/BossMob.h"
#include "Headers/Entities.h"
#include "Headers/Inventory.h"
#include "Headers/Items.h"
#include "Headers/Player.h"
#include "Headers/Dungeon.h"
#include "Headers/RegularMob.h"

#include <iostream>
using namespace std;
int main(){
    string inputName;
    string inputDesc;
    double inputDamage;
    double inputHealth;
    Items potentialItems[10] = {Items("Consumable", "Health Potion", "Heals the player by 10 points.", 10,0), 
    Items("Consumable", "Health Potion", "Heals the player by 5 points.", 5,0),
    Items("Consumable", "Damage Potion", "Damages the enemy by 10 points.", -10, 0),
    Items("Consumable", "Damage Potion", "Damages the enemy by 5 points.", -5, 0),
    Items("Buff", "Damage Increase Potion", "Increase player's damage by 5 points.", 0, 5),
    Items("DeBuff", "Damage Decrease Potion", "Increase player's damage by 10 points.", 0, 10),
    Items("DeBuff", "Damage Decrease Potion", "Y
    }
    
    if(/*Chass*/){
        inputDesc = "CHASS : A mighty warrior with high health but with low damage.";
        inputDamage = 15;
        inputHealth = 130;
    }
    else if(/*Bourns*/){
        inputDesc = "Bourns : A stealth mercinary with high damage and medium health.";
        inputDamage = 25;
        inputHealth = 100;
    }
    else{//CNAS
        inputDesc = "CNAS : A alright warrior with medium damage and medium health";
        inputDamage = 20;
        inputHealth = 100;
    }
    
    Player* userPlayer = new Player(inputName, inputDesc, inputHealth, inputDamage);
	
    int numLevels = 5; 
    
    for(int levelCounter = 5; levelCounter > 5 ; ++levelCounter){

        //levelup
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
