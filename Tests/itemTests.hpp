#include "gtest/gtest.h"

#include "../Headers/Items.h"

TEST(ItemSuite, Constructor){
    Items apple;
    EXPECT_EQ(apple.getDamageEffect(), 0);
    EXPECT_EQ(apple.getHealthEffect(), 0);
    EXPECT_EQ(apple.getItemDescription(), "description");
    EXPECT_EQ(apple.getItemName(),"name");
}

TEST(ItemSuite, ParmConstructorHealth){
    Items healthPotion("Health Potion", "Heals the player by a certain amount", 25.32, 0);
    EXPECT_EQ(healthPotion.getDamageEffect(), 0);
    EXPECT_EQ(healthPotion.getHealthEffect(), 25.32);
    EXPECT_EQ(healthPotion.getItemDescription(), "Heals the player by a certain amount");
    EXPECT_EQ(healthPotion.getItemName(),"Health Potion");
}

TEST(ItemSuite, ParmConstructorNegHealth){
    Items damagePotion("Damage Potion", "Damages the player by a certain amount", -25, 0);
    EXPECT_EQ(damagePotion.getDamageEffect(), 0);
    EXPECT_EQ(damagePotion.getHealthEffect(), -25);
    EXPECT_EQ(damagePotion.getItemDescription(), "Damages the player by a certain amount");
    EXPECT_EQ(damagePotion.getItemName(),"Damage Potion");
}

TEST(ItemSuite, ParmConstructorHealthAndDamage){
    Items weirdPotion("Weird Potion", "Weird effects on Player", -123.32, -2.231);
    EXPECT_EQ(weirdPotion.getDamageEffect(), -2.231);
    EXPECT_EQ(weirdPotion.getHealthEffect(), -123.32);
    EXPECT_EQ(weirdPotion.getItemDescription(), "Weird effects on Player");
    EXPECT_EQ(weirdPotion.getItemName(),"Weird Potion");
}