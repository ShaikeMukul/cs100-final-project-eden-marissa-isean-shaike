#include "gtest/gtest.h"

#include "../Headers/Inventory.h"

TEST(InventorySuite, addZeroItems){
    Inventory test1;
    EXPECT_EQ(test1.getSize(), 0);
}

TEST(InventorySuite, addOneItems){
    Inventory test1;
    test1.addItem(Items("Consumable", "Health Potion", "Heals the player by a certain amount", 25.32, 0));
    EXPECT_EQ(test1.getSize(), 1);
}

TEST(InventorySuite, addMultipleItems){
    Inventory test1;
    for(int i = 0; i < 10; ++i){
        test1.addItem(Items("Consumable", "Health Potion", "Heals the player by a certain amount", 25.32, 0));
    }
    EXPECT_EQ(test1.getSize(), 10);
}

TEST(InventorySuite, verifyGetSizeOneSizedInventory){
    Inventory test1;
    test1.addItem(Items("Consumable", "Health Potion", "Heals the player by a certain amount", 25.32, 0));
    EXPECT_EQ(test1.getItem("Health Potion").getDamageEffect(), 0);
    EXPECT_EQ(test1.getItem("Health Potion").getHealthEffect(), 25.32);
    EXPECT_EQ(test1.getItem("Health Potion").getItemDescription(), "Heals the player by a certain amount");
    EXPECT_EQ(test1.getItem("Health Potion").getItemName(),"Health Potion");
}

TEST(InventorySuite, verifyGetSizeLargeSizedInventory){
    Inventory test1;
    test1.addItem(Items("Consumable", "Health Potion", "Heals", 25.32, 0));
    test1.addItem(Items("Consumable", "Damage Potion", "Damage", -123, 213));
    test1.addItem(Items("Consumable", "Potion Potion", "Potion", 0, 0));
    test1.addItem(Items("Consumable", "Pop Potion", "Potion", 123.12, 0));
    test1.addItem(Items("Consumable", "Lol Potion", "asdsad", 546.45, 123));
    test1.addItem(Items("Consumable", "No Potion", "11323", 12, -123.123));
    test1.addItem(Items("Consumable", "Zero Potion", "vdsa", 654, .4565));

    EXPECT_EQ(test1.getItem("Health Potion").getDamageEffect(), 0);
    EXPECT_EQ(test1.getItem("Zero Potion").getHealthEffect(), 654);
    EXPECT_EQ(test1.getItem("Pop Potion").getItemDescription(), "Potion");
    EXPECT_EQ(test1.getItem("Potion Potion").getItemName(),"Potion Potion");

}

TEST(InventorySuite, RemovingOneItem){
    Inventory test1;
    test1.addItem(Items("Consumable", "Health Potion", "Heals", 25.32, 0));
    test1.addItem(Items("Consumable", "Damage Potion", "Damage", -123, 213));
    test1.addItem(Items("Consumable", "Potion Potion", "Potion", 0, 0));
    test1.addItem(Items("Consumable", "Pop Potion", "Potion", 123.12, 0));
    test1.addItem(Items("Consumable", "Lol Potion", "asdsad", 546.45, 123));
    test1.addItem(Items("Consumable", "No Potion", "11323", 12, -123.123));
    test1.addItem(Items("Consumable", "Zero Potion", "vdsa", 654, .4565));

    test1.removeItem("Pop Potion");

    ASSERT_EQ(test1.getSize(), 6);
}

TEST(InventorySuite, RemovingMultipleItem){
    Inventory test1;
    test1.addItem(Items("Consumable", "Health Potion", "Heals", 25.32, 0));
    test1.addItem(Items("Consumable", "Damage Potion", "Damage", -123, 213));
    test1.addItem(Items("Consumable", "Potion Potion", "Potion", 0, 0));
    test1.addItem(Items("Consumable", "Pop Potion", "Potion", 123.12, 0));
    test1.addItem(Items("Consumable", "Lol Potion", "asdsad", 546.45, 123));
    test1.addItem(Items("Consumable", "No Potion", "11323", 12, -123.123));
    test1.addItem(Items("Consumable", "Zero Potion", "vdsa", 654, .4565));

    test1.removeItem("Pop Potion");
    test1.removeItem("Damage Potion");
    test1.removeItem("Potion Potion");
    test1.removeItem("Lol Potion");
    
    ASSERT_EQ(test1.getItem("No Potion").getItemName(), "No Potion");
    ASSERT_EQ(test1.getItem("Health Potion").getItemName(), "Health Potion");
    ASSERT_EQ(test1.getItem("Zero Potion").getItemName(), "Zero Potion");
    ASSERT_EQ(test1.getSize(), 3);
}

TEST(InventorySuite, RemovingZeroItem){
    Inventory test1;
    test1.addItem(Items("Consumable", "Health Potion", "Heals", 25.32, 0));
    test1.addItem(Items("Consumable", "Damage Potion", "Damage", -123, 213));
    test1.addItem(Items("Consumable", "Potion Potion", "Potion", 0, 0));
    test1.addItem(Items("Consumable", "Pop Potion", "Potion", 123.12, 0));
    test1.addItem(Items("Consumable", "Lol Potion", "asdsad", 546.45, 123));
    test1.addItem(Items("Consumable", "No Potion", "11323", 12, -123.123));
    test1.addItem(Items("Consumable", "Zero Potion", "vdsa", 654, .4565));

    test1.removeItem("Potion");
    test1.removeItem("Deep Potion");

    ASSERT_EQ(test1.getItem("No Potion").getItemName(), "No Potion");
    ASSERT_EQ(test1.getSize(), 7);
}

TEST(InventorySuite, GetSizeZero){
    Inventory test1;

    ASSERT_EQ(test1.getSize(), 0);
}

TEST(InventorySuite, GetSizeNotZero){
    Inventory test1;
    test1.addItem(Items("Consumable", "Health Potion", "Heals", 25.32, 0));
    test1.addItem(Items("Consumable", "Damage Potion", "Damage", -123, 213));
    test1.addItem(Items("Consumable", "Potion Potion", "Potion", 0, 0));
    test1.addItem(Items("Consumable", "Pop Potion", "Potion", 123.12, 0));
    test1.addItem(Items("Consumable", "Lol Potion", "asdsad", 546.45, 123));
    test1.addItem(Items("Consumable", "No Potion", "11323", 12, -123.123));
    test1.addItem(Items("Consumable", "Zero Potion", "vdsa", 654, .4565));
    ASSERT_EQ(test1.getSize(), 7);
}

TEST(InventorySuite, GetSizewithRemove){
    Inventory test1;
    test1.addItem(Items("Consumable", "Health Potion", "Heals", 25.32, 0));
    test1.addItem(Items("Consumable", "Damage Potion", "Damage", -123, 213));
    test1.addItem(Items("Consumable", "Potion Potion", "Potion", 0, 0));
    test1.addItem(Items("Consumable", "Pop Potion", "Potion", 123.12, 0));
    test1.addItem(Items("Consumable", "Lol Potion", "asdsad", 546.45, 123));
    test1.addItem(Items("Consumable", "No Potion", "11323", 12, -123.123));
    test1.addItem(Items("Consumable", "Zero Potion", "vdsa", 654, .4565));

    test1.removeItem("Deep Potion");
    test1.removeItem("Zero Potion");
    test1.removeItem("Potion");
    test1.removeItem("Damage Potion");

    ASSERT_EQ(test1.getSize(), 5);
}

TEST(InventorySuite, PrintEmptyInventory){
    Inventory test1;
    std::ostringstream output;
    int counter = 1;
    output << "\n\t\tInventory\n";
    output << "----------------------------------------\n\n";

    output << "Consumables\n";
    
    output << "\n";
    output << "Debuffs\n";

    output << "\n";
    output << "Buffs\n";
    output << "\n";
    output << "----------------------------------------\n";
    EXPECT_EQ(test1.printItems(), output.str());
}

TEST(InventorySuite, PrintOneItemInventory){
    Inventory test1;
    test1.addItem(Items("Consumable", "Health Potion", "Heals", 25.32, 0));
    std::ostringstream output;
    int counter = 1;
    output << "\n\t\tInventory\n";
    output << "----------------------------------------\n\n";

    output << "Consumables\n";
    output << "\t1. Health Potion : Heals\n";
    output << "\n";
    output << "Debuffs\n";

    output << "\n";
    output << "Buffs\n";
    output << "\n";
    output << "----------------------------------------\n";
    EXPECT_EQ(test1.printItems(), output.str());
}

TEST(InventorySuite, PrintMultipleItemInventory){
    Inventory test1;
    test1.addItem(Items("Consumable", "Health Potion", "Heals", 25.32, 0));
    test1.addItem(Items("Consumable", "Sheild Potion", "Sheilds", 25.32, 0));
    test1.addItem(Items("Debuff", "Negative Charm", "vdsa", 654, .4565));
    test1.addItem(Items("Buff", "Health Charm", "Heals you", 25.32, 0));
    std::ostringstream output;
    int counter = 1;
    output << "\n\t\tInventory\n";
    output << "----------------------------------------\n\n";
    output << "Consumables\n";
    output << "\t1. Health Potion : Heals\n";
    output << "\t2. Sheild Potion : Sheilds\n";
    output << "\n";
    output << "Debuffs\n";
    output << "\t1. Negative Charm : vdsa\n";
    output << "\n";
    output << "Buffs\n";
    output << "\t1. Health Charm : Heals you\n";
    output << "\n";
    output << "----------------------------------------\n";
    EXPECT_EQ(test1.printItems(), output.str());
}