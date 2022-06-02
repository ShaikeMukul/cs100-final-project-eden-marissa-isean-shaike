#ifndef __ACTIONS_H__
#define __ACTIONS_H__

#include "Entities.h"
#include "Player.h"
#include "BossMob.h"
#include "RegularMob.h"
#include "Dungeon.h"

using namespace std;

class Actions {
  public:
    ~Actions();
    void pLightAttack();
    void pHeavyAttack();
    void rLightAttack();
    void rHeavyAttack();
    void bLightAttack();
    void bHeavyAttack();
    void dodgeAction();
    void healingAction(Player&, Player);
};

#endif
