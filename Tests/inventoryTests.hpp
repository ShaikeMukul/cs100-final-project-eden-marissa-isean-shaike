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

TEST(InventorySuite, verifyGetOneSizedInventory){
    Inventory test1;
    test1.addItem(Items("Health Potion", "Heals the player by a certain amount", 25.32, 0));
    EXPECT_EQ(test1.getItem("Health Potion").getDamageEffect(), 0);
    EXPECT_EQ(test1.getItem("Health Potion").getHealthEffect(), 25.32);
    EXPECT_EQ(test1.getItem("Health Potion").getItemDescription(), "Heals the player by a certain amount");
    EXPECT_EQ(test1.getItem("Health Potion").getItemName(),"Health Potion");
}

TEST(InventorySuite, verifyGetLargeSizedInventory){
    Inventory test1;
    test1.addItem(Items("Health Potion", "Heals", 25.32, 0));
    test1.addItem(Items("Damage Potion", "Damage", -123, 213));
    test1.addItem(Items("Potion Potion", "Potion", 0, 0));
    test1.addItem(Items("Pop Potion", "Potion", 123.12, 0));
    test1.addItem(Items("Lol Potion", "asdsad", 546.45, 123));
    test1.addItem(Items("No Potion", "11323", 12, -123.123));
    test1.addItem(Items("Zero Potion", "vdsa", 654, .4565));

    EXPECT_EQ(test1.getItem("Health Potion").getDamageEffect(), 0);
    EXPECT_EQ(test1.getItem("Zero Potion").getHealthEffect(), 654);
    EXPECT_EQ(test1.getItem("Pop Potion").getItemDescription(), "Potion");
    EXPECT_EQ(test1.getItem("Potion Potion").getItemName(),"Potion Potion");

}

TEST(InventorySuite, RemovingOneItem){
    Inventory test1;
    test1.addItem(Items("Health Potion", "Heals", 25.32, 0));
    test1.addItem(Items("Damage Potion", "Damage", -123, 213));
    test1.addItem(Items("Potion Potion", "Potion", 0, 0));
    test1.addItem(Items("Pop Potion", "Potion", 123.12, 0));
    test1.addItem(Items("Lol Potion", "asdsad", 546.45, 123));
    test1.addItem(Items("No Potion", "11323", 12, -123.123));
    test1.addItem(Items("Zero Potion", "vdsa", 654, .4565));

    test1.removeItem("Pop Potion");

    ASSERT_EQ(test1.getSize(), 6);
}

TEST(InventorySuite, RemovingMultipleItem){
    Inventory test1;
    test1.addItem(Items("Health Potion", "Heals", 25.32, 0));
    test1.addItem(Items("Damage Potion", "Damage", -123, 213));
    test1.addItem(Items("Potion Potion", "Potion", 0, 0));
    test1.addItem(Items("Pop Potion", "Potion", 123.12, 0));
    test1.addItem(Items("Lol Potion", "asdsad", 546.45, 123));
    test1.addItem(Items("No Potion", "11323", 12, -123.123));
    test1.addItem(Items("Zero Potion", "vdsa", 654, .4565));

    test1.removeItem("Pop Potion");
    test1.removeItem("Damage Potion");
    test1.removeItem("Potion Potion");
    test1.removeItem("Lol Potion");
    
    ASSERT_EQ(test1.getItem("No Potion").getItemName(), "No Potion");
    ASSERT_EQ(test1.getItem("Health Potion").getItemName(), "Health Potion");
    ASSERT_EQ(test1.getSize(), 3);
}

TEST(InventorySuite, RemovingZeroItem){
    Inventory test1;
    test1.addItem(Items("Health Potion", "Heals", 25.32, 0));
    test1.addItem(Items("Damage Potion", "Damage", -123, 213));
    test1.addItem(Items("Potion Potion", "Potion", 0, 0));
    test1.addItem(Items("Pop Potion", "Potion", 123.12, 0));
    test1.addItem(Items("Lol Potion", "asdsad", 546.45, 123));
    test1.addItem(Items("No Potion", "11323", 12, -123.123));
    test1.addItem(Items("Zero Potion", "vdsa", 654, .4565));

    test1.removeItem("Potion");
    test1.removeItem("Deep Potion");

    ASSERT_EQ(test1.getItem("No Potion").getItemName(), "No Potion");
    ASSERT_EQ(test1.getSize(), 7);
}