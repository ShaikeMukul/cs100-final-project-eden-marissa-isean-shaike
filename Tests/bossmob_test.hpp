#include "gtest/gtest.h"

#include "../Headers/BossMob.h"

class TestOtherClass : public BossMob{
    public:
        TestOtherClass(std::string nameInput, std::string descriptionInput, double healthInput, double damageInput, Actions inputActions[10]) : BossMob(nameInput, descriptionInput, healthInput, damageInput, inputActions) {}
        void changeBossHealth(double amount){
            changeHealth(amount);
        }
        void changeBossDamage(double amount){
            changeDamage(amount);
        }
        void setBossActions(Actions inputActions[]){
            setActions(inputActions);
        }
        Actions getActionTest(int i){
            return getAction(i);
        }
        void setBossHealth(int level){
            setHealth(level);
        }
        void setBossDamage(int level){
            setDamage(level);
        }
};

TEST(BossMob, DefaultConstructor){
    BossMob test;
    EXPECT_EQ(test.getDamage(), -1);
    EXPECT_EQ(test.getHealth(), -1);
    EXPECT_EQ(test.getDescription(), "NULL");
    EXPECT_EQ(test.getName(), "-+- BOSS -+-    Error: default constructor");
}

TEST(BossMob, ParmConstructor){
    Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2)};
    BossMob test("Orge", "Lives under bridges", 1000, 20, testAct);
    EXPECT_EQ(test.getDamage(), 20);
    EXPECT_EQ(test.getHealth(), 1000);
    EXPECT_EQ(test.getDescription(), "Lives under bridges");
    EXPECT_EQ(test.getName(), "-+- BOSS -+-    Orge");
}

TEST(BossMob, ParmEmptyConstructor){
Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2)};
    BossMob test("","",0,0, testAct);
    EXPECT_EQ(test.getDamage(), 0);
    EXPECT_EQ(test.getHealth(), 0);
    EXPECT_EQ(test.getDescription(), "");
    EXPECT_EQ(test.getName(), "-+- BOSS -+-    ");
}

TEST(BossMob, ParmNegativeConstructor){
Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2)};
    BossMob test("Hello","Hi",-102,-122, testAct);
    EXPECT_EQ(test.getDamage(), 122);
    EXPECT_EQ(test.getHealth(), 102);
    EXPECT_EQ(test.getDescription(), "Hi");
    EXPECT_EQ(test.getName(), "-+- BOSS -+-    Hello");
}

TEST(BossMob, changeHealth){
Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2)};
    TestOtherClass test("Hello","Hi",100,15, testAct);

    EXPECT_EQ(test.getHealth(), 100);
    test.changeBossHealth(12);

    EXPECT_EQ(test.getHealth(), 88);
}

TEST(BossMob, changeNegativeHealth){
Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2)};
    TestOtherClass test("Hello","Hi",100,15,testAct);

    EXPECT_EQ(test.getHealth(), 100);
    test.changeBossHealth(100.0000001);

    EXPECT_EQ(test.getHealth(), 0);
}

TEST(BossMob, changeDamage){
Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2)};
    TestOtherClass test("Hello","Hi",100,15,testAct);

    EXPECT_EQ(test.getDamage(), 15);
    test.changeBossDamage(12);

    EXPECT_EQ(test.getDamage(), 3);
}

TEST(BossMob, changeNegativeDamage){
Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2)};
    TestOtherClass test("Hello","Hi",100,15,testAct);

    EXPECT_EQ(test.getDamage(), 15);
    test.changeBossDamage(100.0000001);

    EXPECT_EQ(test.getDamage(), 0);
}

TEST(BossMob, actionsSet_and_getAction){
    Actions overwriteAct[10] = {Actions("TestTitle", "TestDesc", 1, 5)};
    
    Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2)};
    TestOtherClass test("Orge", "Lives under bridges", 1000, 20, overwriteAct);
    test.setBossActions(testAct);// meant to overwrite passed in actions


    EXPECT_EQ(test.getActionTest(0).getDamageOutput(), 2);
}

TEST(BossMob, getActionsOnce_and_ParmConstructor){
    Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2),Actions("TestTitle", "TestDesc", 13, 12)};
    TestOtherClass test("Orge", "Lives under bridges", 1000, 20, testAct);

    EXPECT_EQ(test.getActionTest(5).getHealthOutput(), -999.9);
}

TEST(BossMob, getActionsUnderBound_and_ParmConstructor){
    Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2),Actions("TestTitle", "TestDesc", 13, 12)};

    TestOtherClass test("Orge", "Lives under bridges", 1000, 20, testAct);

    EXPECT_EQ(test.getActionTest(-10).getHealthOutput(), 1);
}

TEST(BossMob, getActionsOverBound){
    Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2),
        Actions("TestTitle", "TestDesc", 13, 12),
        Actions("TestTitle", "TestDesc", 13, 12),
        Actions("TestTitle", "TestDesc", 13, 12),
        Actions("TestTitle", "TestDesc", 13, 12),
        Actions("TestTitle", "TestDesc", 13, 12),
        Actions("TestTitle", "TestDesc", 13, 12),
        Actions("TestTitle", "TestDesc", 13, 12),
        Actions("TestTitle", "TestDesc", 13, 121),
        Actions("TestTitle", "TestDesc", 13, 132)};
     TestOtherClass test("Orge", "Lives under bridges", 1000, 20, testAct);

    EXPECT_EQ(test.getActionTest(110).getDamageOutput(), 132);
}

TEST(BossMob, setHealthRegularLevel){
    Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2),Actions("TestTitle", "TestDesc", 13, 12)};
    TestOtherClass test("Orge", "Lives under bridges", 1000, 20, testAct);

    test.setBossHealth(3);

    EXPECT_EQ(test.getHealth(), 184);
}

TEST(BossMob, setHealthUnderflowLevel){
    Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2),Actions("TestTitle", "TestDesc", 13, 12)};

    TestOtherClass test("Orge", "Lives under bridges", 1000, 20, testAct);

    test.setBossHealth(-10);

    EXPECT_EQ(test.getHealth(), 128);
}

TEST(BossMob, setDamageUnderflowLevel){
    Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2),Actions("TestTitle", "TestDesc", 13, 12)};

    TestOtherClass test("Orge", "Lives under bridges", 1000, 20, testAct);

    test.setBossDamage(-1);

    EXPECT_EQ(test.getDamage(), 36);
}

TEST(BossMob, setHealthOverflowevel){
    Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2),Actions("TestTitle", "TestDesc", 13, 12)};

    TestOtherClass test("Orge", "Lives under bridges", 1000, 20, testAct);

    test.setBossHealth(10);

    EXPECT_EQ(test.getHealth(), 240);
}

TEST(BossMob, setDamageOverflowLevel){
    Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2),Actions("TestTitle", "TestDesc", 13, 12)};

    TestOtherClass test("Orge", "Lives under bridges", 1000, 20, testAct);

    test.setBossDamage(123);

    EXPECT_EQ(test.getDamage(), 60);
}

TEST(BossMob, getTag){
    Actions testAct[10] = {Actions("TestTitle", "TestDesc", 1, 2),Actions("TestTitle", "TestDesc", 13, 12)};

    TestOtherClass test("Orge", "Lives under bridges", 1000, 20, testAct);


    EXPECT_EQ(test.getTag(), "Boss");
}