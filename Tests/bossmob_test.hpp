#include "gtest/gtest.h"

#include "../Headers/BossMob.h"

class TestOtherClass : public BossMob{
    public:
        TestOtherClass(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput) : BossMob(nameInput, descriptionInput, healthInput, damageInput) {}
        void changeBossHealth(double amount){
            changeBossHealth(amount);
        }
        void changeBossDamage(double amount){
            changeBossDamage(amount);
        }
};

TEST(BossMob, DefaultConstructor){
    BossMob test;
    EXPECT_EQ(test.getDamage(), 0);
    EXPECT_EQ(test.getHealth(), 0);
    EXPECT_EQ(test.getDescription(), "Undefined Boss Monster Description");
    EXPECT_EQ(test.getName(), "-+- BOSS -+-    Undefined Boss Monster");
}

TEST(BossMob, ParmConstructor){
    BossMob test("Orge", "Lives under bridges", 1000, 20);
    EXPECT_EQ(test.getDamage(), 20);
    EXPECT_EQ(test.getHealth(), 1000);
    EXPECT_EQ(test.getDescription(), "Lives under bridges");
    EXPECT_EQ(test.getName(), "-+- BOSS -+-    Orge");
}

TEST(BossMob, ParmEmptyConstructor){
    BossMob test("","",0,0);
    EXPECT_EQ(test.getDamage(), 0);
    EXPECT_EQ(test.getHealth(), 0);
    EXPECT_EQ(test.getDescription(), "");
    EXPECT_EQ(test.getName(), "-+- BOSS -+-    ");
}

TEST(BossMob, ParmNegativeConstructor){
    BossMob test("Hello","Hi",-102,-122);
    EXPECT_EQ(test.getDamage(), 122);
    EXPECT_EQ(test.getHealth(), 102);
    EXPECT_EQ(test.getDescription(), "Hi");
    EXPECT_EQ(test.getName(), "-+- BOSS -+-    Hello");
}

TEST(BossMob, changeHealth){
    TestOtherClass test("Hello","Hi",100,15);

    EXPECT_EQ(test.getHealth(), 100);
    test.changeBossHealth(12);

    EXPECT_EQ(test.getHealth(), 88);
}

TEST(BossMob, changeNegativeHealth){
    TestOtherClass test("Hello","Hi",100,15);

    EXPECT_EQ(test.getHealth(), 100);
    test.changeBossHealth(100.0000001);

    EXPECT_EQ(test.getHealth(), 0);
}

TEST(BossMob, changeDamage){
    TestOtherClass test("Hello","Hi",100,15);

    EXPECT_EQ(test.getDamage(), 15);
    test.changeBossDamage(12);

    EXPECT_EQ(test.getDamage(), 3);
}

TEST(BossMob, changeNegativeDamage){
    TestOtherClass test("Hello","Hi",100,15);

    EXPECT_EQ(test.getDamage(), 15);
    test.changeBossDamage(100.0000001);

    EXPECT_EQ(test.getDamage(), 0);
}