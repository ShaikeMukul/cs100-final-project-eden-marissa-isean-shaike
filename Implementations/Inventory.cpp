#include "../Headers/Inventory.h"

void Inventory::addItem(Items item){
    itemList.push_back(item);
}

Items Inventory::getItem(std::string itemName){
    for(Items item : itemList){
        if(item.getItemName() == itemName){
            return item;
        }
    }
    return Items();
}

void Inventory::removeItem(std::string itemName){
    int count = 0;
    for(Items item : itemList){
        if(item.getItemName() == itemName){
            itemList.erase(itemList.begin() + count);
            return;
        }
        ++count;
    }
}

