#ifndef DUNGEON_H
#define DUNGEON_H
#include <string>
#include <sstream>
#include "Player.h"
#include "BossMob.h"
#include "RegularMob.h"

class Dungeon : public Player, public BossMob, public RegularMob{
        protected:
            int currLevel;
            Player* currPlayer;
            Entities* currEnemy;

            Dungeon();
            std::string getCurrEntities();
            void attack(Entities*);
            Entities* getDeath();
            void loadEnemy();
            int getCurrLevel();
            void nextFloor();
};


#endif
