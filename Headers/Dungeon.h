#ifndef DUNGEON_H
#define DUNGEON_H
#include <string>
#include <sstream>
#include <iostream>
#include "Player.h"
#include "BossMob.h"
#include "RegularMob.h"


class Dungeon : public Player, public BossMob, public RegularMob{
        public:
            int currLevel;
            Player* currPlayer;
            BossMob* currBEnemy;
            RegularMob* currREnemy;
            BossMob* boss;
    
            Dungeon();
            ~Dungeon();
            Dungeon(Player* currP, BossMob* currB, RegularMob* currR) : currPlayer(currP), currBEnemy(currB), currREnemy(currR){}
            std::string getCurrEntities();
            void attack(Entities*);
            Entities* getDeath();
            int getCurrLevel();
            void nextFloor();
};


#endif
