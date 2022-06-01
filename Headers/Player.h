#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <vector>


class Player{
protected:
    std::string name;
    int strength;
    int level;
    std::vector<Actions> potentActions;
    double getHealth();
    double getDamage();
    void changeHealth();
    void changeDamage();
    bool levelUp();
private:
    std::vector<std::string> description;
public:
    Player();
    void setName();
    std::string getName();
    std::vector<std::string> className;
    void setCollege();
};


#endif
