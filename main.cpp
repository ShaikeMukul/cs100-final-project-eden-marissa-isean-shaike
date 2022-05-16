#include <iostream>
#include "Headers/Player.h"


int main() {
    Player player;
    player.setName();
    std::cout<<"Your Username is: "<<player.getName()<<std::endl;
    player.setCollege();
    return 0;
}
