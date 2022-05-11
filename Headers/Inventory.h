#ifndef INVENTORY_H
#define INVENTORY_H

#include "Items.h"
#include <vector>

class Inventory{
    private:
        vector<Items> itemList;
        int numItems;
    protected:
        void addItem(Items item);
        void removeItem(Items item);
    public:
        std::string printItems();
        int getSize();
};

#endif