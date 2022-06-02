#ifndef DUNGEON_H
#define DUNGEON_H
#include <string>
#include "Player.h"

class Dungeon {
        protected:
            int currLevel;
            Player currPlayer;
            Entities currEnemy;
            std::string getCurrEntities();
            Entities attack();
            Entities getDeath();
            void loadEnemy();
            int getCurrLevel();
            void nextFloor();
};


#endif
