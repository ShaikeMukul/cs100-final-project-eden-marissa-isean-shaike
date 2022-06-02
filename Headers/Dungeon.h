#ifndef DUNGEON_H
#define DUNGEON_H
#include <string>
#include "Player.h"
#include "BossMob.h"
#include "RegularMob.h"

class Dungeon : protected Player, protected BossMob, protected RegularMob{
        protected:
            int currLevel;
            Player currPlayer;
            Entities* currEnemy;

            std::string getCurrEntities();
            void attack(Entities*);
            Entities* getDeath();
            void loadEnemy();
            int getCurrLevel();
            void nextFloor();
};


#endif
