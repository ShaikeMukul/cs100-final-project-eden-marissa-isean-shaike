#include "gtest/gtest.h"

#include "../Headers/Player.h"
TEST(PlayerTest, DefaultConstructor){
    Player test;
    EXPECT_EQ(test.name,"Player");
    EXPECT_EQ(test.level,0);
    EXPECT_EQ(test.damage,0);
    EXPECT_EQ(test.health,0);
    EXPECT_EQ(test.discription,"This player is in the dark dungeon");
}

TEST(PlayerSetName, CanSetName){
    Player test("Hero");
    EXPECT_EQ(test.setName(),"Hero");
}

TEST(PlayerChangeHealth, PositiveNumber){
    Player test(100,50);

    EXPECT_EQ(test.getHealth(), 100);
    test.changeHealth(50);
    EXPECT_EQ(test.getHealth(), 50);
}

TEST(PlayerChangeDamage, PositiveNumber){
    Player test(100,50);

    EXPECT_EQ(test.getDamage(), 50);
    test.changeDamage(50);
    EXPECT_EQ(test.getDamage(), 50);
}

TEST(PlayerLevelUp, PositiveNumber){
    Player test(1)
    EXPECT_EQ(test.levelUp(),setHealth(1));
    EXPECT_EQ(test.levelUp(),setDamage(1));     
}

