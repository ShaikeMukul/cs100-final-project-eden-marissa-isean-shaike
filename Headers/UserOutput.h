#ifndef USEROUTPUT_H
#define USEROUTPUT_H

#include <string>
#include "Dungeon.h"

class UserOutput {
        public:
           std::string printIntroduction;
           std::string printMenu();
           std::string printInventory();
           std::string printEnding();
           std::string printAdvancement();
           std::string printScene();
};


#endif USEROUTPUT_H
