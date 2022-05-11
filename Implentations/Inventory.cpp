#include "Inventory.h"
/*void addItem(Items item);
        void removeItem(Items item);
    public:
        std::string printItems();
        int getSize();*/
void Inventory::addItem(Items item){
    itemList.push_back(item);
}
