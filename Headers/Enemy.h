#ifndef ENEMY_H
#define ENEMY_H

#include "BossMob.h"
#include "RegularMob.h"

class Enemy : protected BossMob, protected RegularMob {
    protected:
        bool isAlive();
};

#endif