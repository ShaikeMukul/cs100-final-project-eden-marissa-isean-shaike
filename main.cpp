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

    
    cout << "-------------------------------------------------------------------- ◆ Welcome to The Dark Dungeon ◆ --------------------------------------------------------------------" << endl;
    cout << endl; 
    cout << "   🟀 Finally someone is here! Hello hero! What is your name?" << endl;
    cout << "    >";

    cin >> inputName;

    cout << "   🟀 Ahh "; //<< user.getName()  << ", what a fine name! And what college sent you here?" << endl;
    cout << "   🟀 Brace yourself " << inputName << " as the campus of UC Riverside depends on you to successfully traverse through the unknown: the tower nicknamed as  The Dark Dungeon..." << endl;
    cout << "   ..." << endl;
    cout << "   .." << endl;
    cout << "   ." << endl;

            cout << "   🟀 It is a dark and stormy night on the UCR campus... *CRACK* *BOOM* ..." << endl;
            cout << "   🟀 You find yourself standing in front of the Bell Tower, illuminated by the crackling lightning. In that split second where light fills the world, you see the entrance open, filled with strange sounds, inviting you to explore the mysterious interior." << endl;
            cout << "   🟀 Clutching the straps of your backpack tightly, you begin to make your way into the Bell Tower to see what horrors may await you." << endl;
    cout << "   ..." << endl;
            cout << "   .." << endl;
            cout << "   ." << endl;

            cout << "   🟀 As you walk through the entrance, you're encountered with pitch darkness. You turn on your phone flashlight and find a set of stairs in front of you. You shine your only source of light up the stairs, the end disappearing into the darkness above. Swallowing your fears down and questioning why you were chosen, you make your way up the stairs." << endl;
    cout << "   🟀 You think to yourself, \"Maybe this isn't so bad\": there hasnt been anything scary yet besides the occasional thunder roar and eerie sounds. But of course with your luck, you come face to face with a *enemy name*! " << endl;
    cout << "   🟀 Frozen in fear, you're not sure how to get out of this. Running away might end up worse for you: going back down the stairs could result in an ER trip for all you know. You fling your backpack to the ground, opening it swiftly, pulling out a..." << endl;
    cout << "    > " << endl;
    cout << "   🟀 You grip your weapon and move into a fighting stance as you prepare yourself for battle!" << endl;
    cout << endl;

    string input = "";
    while(input != "CHASS" && input != "CNAS" && input != "BOURNS" ){
        cout << "Please pick a class: CHASS | CNAS | BOURNS";
        cin >> input;
        cout << input;
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
            //output death messages
        // ifgetdeath == enemy
            //next level
        //iffetdeath == boss 
            //levelcou = 5
            //boss defeated
        if(levelCounter%5==0){
            //level up the player
        }
    }


    cout << "Had fun? Play again by running the file again...\n"<< endl;
    cout << "\nMade By:\n\tIsean Bhanot\n\tEden Fraczkiewicz\n\tShaike Mukul\n\tMarissa Valencia\n\n";

    
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
