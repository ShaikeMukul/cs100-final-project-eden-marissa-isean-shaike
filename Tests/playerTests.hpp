#include "gtest/gtest.h"

#include "../Headers/Player.h"

TEST(PlayerTest, DefaultConstructor){
    Player test;
    EXPECT_EQ(test.getName(),"player");
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
    EXPECT_EQ(test.getDamage(), 0);
}

TEST(PlayerTest, EmptyConstructor){
    Player test(" "," ",0,0);
    EXPECT_EQ(test.getName()," ");
    EXPECT_EQ(test.getLevel(),0);
    EXPECT_EQ(test.getDamage(),0);
    EXPECT_EQ(test.getHealth(),0);
    EXPECT_EQ(test.getDescription()," ");
}
TEST(PlayerTest, NegativeConstructor){
    Player test("UCR_Hero","Player Negative Constructor Test",70,75);
    EXPECT_EQ(test.getName(),"UCR_Hero");
    EXPECT_EQ(test.getLevel(),0);
    EXPECT_EQ(test.getDamage(),75);
    EXPECT_EQ(test.getHealth(),70);
    EXPECT_EQ(test.getDescription(),"Player Negative Constructor Test");
}

TEST(PlayerChangeHealth, NegativeNumber){
    Player test("Hero", "The best hero ever", 100, 50);

    EXPECT_EQ(test.getHealth(), 100);
    test.changeHealth(100.00001);
    EXPECT_EQ(test.getHealth(), 0);
}

TEST(PlayerChangeDamage, NegativeNumber){
   Player test("Hero", "The best hero ever", 100, 50);

    EXPECT_EQ(test.getDamage(), 50);
    test.changeDamage(100.0000001);
    EXPECT_EQ(test.getDamage(), 0);
}
