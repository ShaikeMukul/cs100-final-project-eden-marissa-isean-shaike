#include "gtest/gtest.h"

#include "../Headers/Player.h"

TEST(PlayerTest, DefaultConstructor){
    Player test;
    EXPECT_EQ(test.getName(),"Player");
    EXPECT_EQ(test.getLevel(),0);
    EXPECT_EQ(test.getDamage(),0);
    EXPECT_EQ(test.getHealth(),0);
    EXPECT_EQ(test.getDescription(),"This player is in the dark dungeon");
}

TEST(PlayerSetName, CanSetName){
    Player test("Hero", "The best hero ever", 100, 10);
    EXPECT_EQ(test.getName(),"Hero");
}

TEST(PlayerChangeHealth, PositiveNumber){
    Player test("Hero", "The best hero ever", 100, 50);

    EXPECT_EQ(test.getHealth(), 100);
    test.changeHealth(50);
    EXPECT_EQ(test.getHealth(), 50);
}

TEST(PlayerChangeDamage, PositiveNumber){
   Player test("Hero", "The best hero ever", 100, 50);

    EXPECT_EQ(test.getDamage(), 50);
    test.changeDamage(50);
    EXPECT_EQ(test.getDamage(), 50);
}

// TEST(PlayerLevelUp, PositiveNumber){
//     Player test("Hero", "The best hero ever", 100, 10);
//     test.levelUp();
//     EXPECT_EQ(test.getHealth(),110);
//     EXPECT_EQ(test.getDamage(),40);     
// }

