#ifndef __ACTIONS_H__
#define __ACTIONS_H__

#include "Entities.h"
#include "Player.h"
#include "BossMob.h"
#include "RegularMob.h"
#include <string>

using namespace std;

class Actions : public Entities {
  public:
    /*using Entities& wouldnt work cause we need enemy and player 
    objects to adjust the respective damage and health, but if i do that then 
    it wouldnt be a strategy pattern anymore?*/
    virtual void lightAttack(Entities&) = 0;
    virtual void heavyAttack(Entities&) = 0;
    virtual ~Actions();
};

class EnemyActions : public Actions {
  public:
    virtual void lightAttack(Entities&);
    virtual void heavyAttack(Entities&);
};

class PlayerActions : public Actions {
  public:
    virtual void lightAttack(Entities&);
    virtual void heavyAttack(Entities&);
    void dodgeAction(Entities&);
    void healingAction(Entities&);
};

#endif
