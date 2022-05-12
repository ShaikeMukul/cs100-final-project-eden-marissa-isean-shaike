#include "../Headers/Inventory.h"
/*void addItem(Items item);
        void removeItem(std::string itemName);
    public:
        std::string printItems();
        int getSize();*/
void Inventory::addItem(Items item){
    itemList.push_back(item);
}

Items Inventory::getItem(std::string itemName){
    for(Items item : itemList){
        if(item.getItemName() == itemName){
            return item;
        }
    }
}