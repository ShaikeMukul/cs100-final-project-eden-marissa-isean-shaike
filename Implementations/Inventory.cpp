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

Items Inventory::getItem(int index){
    if(index < itemList.size()){
        return itemList.at(index);
    }
    return itemList.at(0);
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
    output << "\n\t\tInventory\n";
    output << "----------------------------------------\n\n";

    output << "Consumables\n";
    for(Items item : itemList){
        if(item.getTag() == "Consumable"){
            output << '\t';
            output << counter << ". ";
            output << item.getItemName() << " : " << item.getItemDescription() << "\n";
            ++counter;
        }
    }
    output << "\n";
    counter = 1;
    output << "Debuffs\n";
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
    output << "Buffs\n";
    for(Items item : itemList){
        if(item.getTag() == "Buff"){
            output << '\t';
            output << counter << ". ";
            output << item.getItemName() << " : " << item.getItemDescription() << "\n";
            ++counter;
        }
    }
    output << "\n";
    output << "----------------------------------------\n";
    return output.str();
}