#include "../Headers/Enemy.h"

bool Enemy::isAlive(){
    return (getHealth() == 0) ? false : true;
}