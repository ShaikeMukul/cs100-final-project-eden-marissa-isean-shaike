#ifndef INVENTORY_H
#define INVENTORY_H

#include "Items.h"
#include <vector>

class Inventory{
    private:
        std::vector<Items> itemList;
        int numItems;
    public:
        void addItem(Items);
        void removeItem(std::string);
        std::string printItems();
        int getSize() { return (itemList.size());}
        int getItem(std::string);
};

#endif