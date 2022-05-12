#include "../Headers/Inventory.h"
/*void addItem(Items item);
        void removeItem(std::string itemName);
    public:
        std::string printItems();
        int getSize();*/
void Inventory::addItem(Items item){
    itemList.push_back(item);
}