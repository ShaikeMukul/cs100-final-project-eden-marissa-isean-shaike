#include "gtest/gtest.h"

#include "../Headers/Inventory.h"

TEST(InventorySuite, addZeroItems){
    Inventory test1;
    EXPECT_EQ(test1.getSize(), 0);
}

TEST(InventorySuite, addOneItems){
    Inventory test1;
    test1.addItem(Items("Health Potion", "Heals the player by a certain amount", 25.32, 0));
    EXPECT_EQ(test1.getSize(), 1);
}

TEST(InventorySuite, addMultipleItems){
    Inventory test1;
    for(int i = 0; i < 10; ++i){
        test1.addItem(Items("Health Potion", "Heals the player by a certain amount", 25.32, 0));
    }
    EXPECT_EQ(test1.getSize(), 10);
}

/*
EXPECT_EQ(test1.getSize(), 1);
EXPECT_EQ(test1.at(0).getDamageEffect(), 0);
EXPECT_EQ(test1.at(0).getHealthEffect(), 25.32);
EXPECT_EQ(test1.at(0).getItemDescription(), "Heals the player by a certain amount");
EXPECT_EQ(test1.at(0).getItemName(),"Health Potion");
*/