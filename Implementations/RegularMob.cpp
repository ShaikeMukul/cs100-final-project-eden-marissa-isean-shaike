#include "../Headers/RegularMob.h"

void RegularMob::changeDamage(double lessenDamage){
    damage = damage - lessenDamage;
    if(damage < 0){
        damage = 0;
    }
}

void RegularMob::changeHealth(double damageReceived){
    health = health - damageReceived;
    if(health <0 ){
        health = 0;
    }
}