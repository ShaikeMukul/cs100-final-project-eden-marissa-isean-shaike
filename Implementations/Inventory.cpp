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

std::string Inventory::printItems(){
    std::ostringstream output;
    int counter = 1;
    output << "Inventory\n";
    output << "----------------------------------------\n\n";

    output << "\t Consumables\n";
    for(Items item : itemList){
        if(item.getTag() == "Consumables"){
            output << '\t';
            output << counter << ". ";
            output << item.getItemName() << " : " << item.getItemDescription() << "\n";
            ++counter;
        }
    }
    output << "\n";
    counter = 1;
    output << "\t Debuffs\n";
    for(Items item : itemList){
        if(item.getTag() == "Debuff"){
            output << '\t';
            output << counter << ". ";
            output << item.getItemName() << " : " << item.getItemDescription() << "\n";
            ++counter;
        }
    }

    output << "\n";
    counter = 1;
    output << "\t Buffs\n";
    for(Items item : itemList){
        if(item.getTag() == "Buff"){
            output << '\t';
            output << counter << ". ";
            output << item.getItemName() << " : " << item.getItemDescription() << "\n";
            ++counter;
        }
    }
    output << "\n";
    return output.str();
}