#include "gtest/gtest.h"

#include "../Headers/RegularMob.h"

class TestClass : public RegularMob{
    public:
        TestClass(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput) : RegularMob(nameInput, descriptionInput, healthInput, damageInput) {}
        void changeMobHealth (double amount){
            changeHealth(amount);
        }
        void changeMobDamage (double amount){
            changeDamage(amount);
        }
        void setMobDamage(int value){
            setDamage(value);
        }
        void setMobHealth(int value){
            setHealth(value);
        }
};

TEST(RegularMob, DefaultConstructor){
    RegularMob test;
    EXPECT_EQ(test.getDamage(), 0);
    EXPECT_EQ(test.getHealth(), 0);
    EXPECT_EQ(test.getDescription(), "Undefined Monster Description");
    EXPECT_EQ(test.getName(), "Undefined Monster");
}

TEST(RegularMob, ParmConstructor){
    RegularMob test("Orge", "Lives under bridges", 1000, 20);
    EXPECT_EQ(test.getDamage(), 20);
    EXPECT_EQ(test.getHealth(), 1000);
    EXPECT_EQ(test.getDescription(), "Lives under bridges");
    EXPECT_EQ(test.getName(), "Orge");
}

TEST(RegularMob, ParmEmptyConstructor){
    RegularMob test("","",0,0);
    EXPECT_EQ(test.getDamage(), 0);
    EXPECT_EQ(test.getHealth(), 0);
    EXPECT_EQ(test.getDescription(), "");
    EXPECT_EQ(test.getName(), "");
}

TEST(RegularMob, ParmNegativeConstructor){
    RegularMob test("Hello","Hi",-102,-122);
    EXPECT_EQ(test.getDamage(), 122);
    EXPECT_EQ(test.getHealth(), 102);
    EXPECT_EQ(test.getDescription(), "Hi");
    EXPECT_EQ(test.getName(), "Hello");
}

TEST(RegularMob, changeHealth){
    TestClass test("Hello","Hi",100,15);

    EXPECT_EQ(test.getHealth(), 100);
    test.changeMobHealth(12);

    EXPECT_EQ(test.getHealth(), 88);
}

TEST(RegularMob, changeNegativeHealth){
    TestClass test("Hello","Hi",100,15);

    EXPECT_EQ(test.getHealth(), 100);
    test.changeMobHealth(100.0000001);

    EXPECT_EQ(test.getHealth(), 0);
}

TEST(RegularMob, changeDamage){
    TestClass test("Hello","Hi",100,15);

    EXPECT_EQ(test.getDamage(), 15);
    test.changeMobDamage(12);

    EXPECT_EQ(test.getDamage(), 3);
}

TEST(RegularMob, changeNegativeDamage){
    TestClass test("Hello","Hi",100,15);

    EXPECT_EQ(test.getDamage(), 15);
    test.changeMobDamage(100.0000001);

    EXPECT_EQ(test.getDamage(), 0);
}

TEST(RegularMob, setHealthRegularLevel){
    TestClass test("Orge", "Lives under bridges", 1000, 20);

    test.setMobHealth(3);

    EXPECT_EQ(test.getHealth(), 102);
}

TEST(RegularMob, setHealthUnderflowLevel){
    TestClass test("Orge", "Lives under bridges", 1000, 20);

    test.setMobHealth(-10);

    EXPECT_EQ(test.getHealth(), 74);
}

TEST(RegularMob, setDamageUnderflowLevel){
    TestClass test("Orge", "Lives under bridges", 1000, 20);

    test.setMobDamage(-1);

    EXPECT_EQ(test.getDamage(), 16);
}

TEST(RegularMob, setHealthOverflowevel){
    TestClass test("Orge", "Lives under bridges", 1000, 20);
    
    test.setMobHealth(10);

    EXPECT_EQ(test.getHealth(), 130);
}

TEST(RegularMob, setDamageOverflowLevel){
    TestClass test("Orge", "Lives under bridges", 1000, 20);

    test.setMobDamage(123);

    EXPECT_EQ(test.getDamage(), 40);
}

TEST(RegularMob, getTagRegularMob){
    TestClass test("Orge", "Lives under bridges", 1000, 20);

    EXPECT_EQ(test.getTag(), "RegularMob");
}