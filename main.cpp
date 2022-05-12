#include "Headers/Items.h"
#include "Headers/Inventory.h"
#include <iostream>
int main(){
    Inventory test1;
    test1.addItem(Items("Debuff", "Health Potion", "Heals", 25.32, 0));
    test1.addItem(Items("Consumable", "Damage Potion", "Damage", -123, 213));
    test1.addItem(Items("Debuff", "Potion Potion", "Potion", 0, 0));
    test1.addItem(Items("Consumable", "Pop Potion", "Potion", 123.12, 0));
    test1.addItem(Items("Consumable", "Lol Potion", "asdsad", 546.45, 123));
    test1.addItem(Items("Buff", "No Potion", "11323", 12, -123.123));
    test1.addItem(Items("Consumable", "Zero Potion", "vdsa", 654, .4565));
    std::cout << test1.printItems();
    return 0;
}