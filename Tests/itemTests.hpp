#include "gtest/gtest.h"

#include "../Headers/Items.h"

TEST(ItemSuite, Constructor){
    Items apple;
    EXPECT_EQ(apple.getDamageEffect(), 0);
    EXPECT_EQ(apple.getHealthEffect(), 0);
    EXPECT_EQ(apple.getItemDescription(), "description");
    EXPECT_EQ(apple.getItemName(),"name");
}

TEST(ItemSuite, ParmConstructor){
    Items healthPotion("Health Potion", "Heals the player by a certain amount", 25.32, 0);
    EXPECT_EQ(healthPotion.getDamageEffect(), 0);
    EXPECT_EQ(healthPotion.getHealthEffect(), 25.32);
    EXPECT_EQ(healthPotion.getItemDescription(), "Heals the player by a certain amount");
    EXPECT_EQ(healthPotion.getItemName(),"Health Potion");
}