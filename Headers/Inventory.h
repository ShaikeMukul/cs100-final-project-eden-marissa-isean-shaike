#ifndef INVENTORY_H
#define INVENTORY_H

#include "Items.h"
#include <vector>

class Inventory{
    private:
        vector<Items> itemList;
        int numItems;
    protected:
        Inventory();
        void addItem(Items item);
        void removeItem(std::string itemName);
        std::string printItems();
        int getSize();
};

#endif