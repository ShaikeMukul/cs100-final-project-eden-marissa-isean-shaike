#ifndef __ACTIONS_H__
#define __ACTIONS_H__

#include "Entities.h"
#include "Player.h"
#include "BossMob.h"
#include "RegularMob.h"

using namespace std;

class Actions : public Entities {
  public:
    virtual void lightAttack() = 0;
    virtual void heavyAttack() = 0;
    virtual ~Actions();
};

class EnemyActions : public Actions {
  public:
    virtual void lightAttack();
    virtual void heavyAttack();
};

class PlayerActions : public Actions {
  public:
    virtual void lightAttack();
    virtual void heavyAttack();
    void dodgeAction();
    void healingAction(Player&, Player);
};

#endif
