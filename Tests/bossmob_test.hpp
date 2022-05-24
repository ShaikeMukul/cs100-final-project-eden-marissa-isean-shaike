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
};

TEST(BossMob, DefaultConstructor){
    BossMob test;
    EXPECT_EQ(test.getDamage(), 0);
    EXPECT_EQ(test.getHealth(), 0);
    EXPECT_EQ(test.getDescription(), "Undefined Boss Monster Description");
    EXPECT_EQ(test.getName(), "-+- BOSS -+-    Undefined Boss Monster");
}

TEST(BossMob, ParmConstructor){
    Actions testAct[10];
    for(int i = 0; i < 10; ++i){
        testAct[i] = Actions();
        testAct[i].healthEffect = i*2;
    }
    BossMob test("Orge", "Lives under bridges", 1000, 20, testAct);
    EXPECT_EQ(test.getDamage(), 20);
    EXPECT_EQ(test.getHealth(), 1000);
    EXPECT_EQ(test.getDescription(), "Lives under bridges");
    EXPECT_EQ(test.getName(), "-+- BOSS -+-    Orge");
}

TEST(BossMob, ParmEmptyConstructor){
    Actions testAct[10];
    for(int i = 0; i < 10; ++i){
        testAct[i] = Actions();
        testAct[i].healthEffect = i*3;
    }
    BossMob test("","",0,0, testAct);
    EXPECT_EQ(test.getDamage(), 0);
    EXPECT_EQ(test.getHealth(), 0);
    EXPECT_EQ(test.getDescription(), "");
    EXPECT_EQ(test.getName(), "-+- BOSS -+-    ");
}

TEST(BossMob, ParmNegativeConstructor){
    Actions testAct[10];
    for(int i = 0; i < 10; ++i){
        testAct[i] = Actions();
        testAct[i].healthEffect = i*3;
    }
    BossMob test("Hello","Hi",-102,-122, testAct);
    EXPECT_EQ(test.getDamage(), 122);
    EXPECT_EQ(test.getHealth(), 102);
    EXPECT_EQ(test.getDescription(), "Hi");
    EXPECT_EQ(test.getName(), "-+- BOSS -+-    Hello");
}

TEST(BossMob, changeHealth){
    Actions testAct[10];
    for(int i = 0; i < 10; ++i){
        testAct[i] = Actions();
        testAct[i].healthEffect = i*3;
    }
    TestOtherClass test("Hello","Hi",100,15, testAct);

    EXPECT_EQ(test.getHealth(), 100);
    test.changeBossHealth(12);

    EXPECT_EQ(test.getHealth(), 88);
}

TEST(BossMob, changeNegativeHealth){
    Actions testAct[10];
    for(int i = 0; i < 10; ++i){
        testAct[i] = Actions();
        testAct[i].healthEffect = i*3;
    }
    TestOtherClass test("Hello","Hi",100,15,testAct);

    EXPECT_EQ(test.getHealth(), 100);
    test.changeBossHealth(100.0000001);

    EXPECT_EQ(test.getHealth(), 0);
}

TEST(BossMob, changeDamage){
    Actions testAct[10];
    for(int i = 0; i < 10; ++i){
        testAct[i] = Actions();
        testAct[i].healthEffect = i*3;
    }
    TestOtherClass test("Hello","Hi",100,15,testAct);

    EXPECT_EQ(test.getDamage(), 15);
    test.changeBossDamage(12);

    EXPECT_EQ(test.getDamage(), 3);
}

TEST(BossMob, changeNegativeDamage){
    Actions testAct[10];
    for(int i = 0; i < 10; ++i){
        testAct[i] = Actions();
        testAct[i].healthEffect = i*3;
    }
    TestOtherClass test("Hello","Hi",100,15,testAct);

    EXPECT_EQ(test.getDamage(), 15);
    test.changeBossDamage(100.0000001);

    EXPECT_EQ(test.getDamage(), 0);
}

TEST(BossMob, actionsSet_and_getAction){
    Actions overwriteAct[10];
    for(int i = 0; i < 10; ++i){
        overwriteAct[i] = Actions();
        overwriteAct[i].healthEffect = i+123;
    }
    
    Actions testAct[10];
    for(int i = 0; i < 10; ++i){
        testAct[i] = Actions();
        testAct[i].healthEffect = i;
    }
    TestOtherClass test("Orge", "Lives under bridges", 1000, 20, overwriteAct);
    test.setBossActions(testAct);// meant to overwrite passed in actions

    for(int j = 9; j >= 0; --j){
        EXPECT_EQ(test.getActionTest(j).healthEffect, j);
    }
}

TEST(BossMob, getActionsOnce_and_ParmConstructor){
    Actions testAct[10];
    for(int i = 0; i < 10; ++i){
        testAct[i] = Actions();
        testAct[i].healthEffect = i*2;
    }
    TestOtherClass test("Orge", "Lives under bridges", 1000, 20, testAct);

    EXPECT_EQ(test.getActionTest(5).healthEffect, 10);
}

TEST(BossMob, getActionsUnderBound_and_ParmConstructor){
    Actions testAct[10];
    for(int i = 0; i < 10; ++i){
        testAct[i] = Actions();
        testAct[i].healthEffect = i*2 + 122;
    }

     TestOtherClass test("Orge", "Lives under bridges", 1000, 20, testAct);

    EXPECT_EQ(test.getActionTest(-10).healthEffect, 122);
}

TEST(BossMob, getActionsOverBound){
    Actions testAct[10];
    for(int i = 0; i < 10; ++i){
        testAct[i] = Actions();
        testAct[i].healthEffect = i*2 + 100;
    }
     TestOtherClass test("Orge", "Lives under bridges", 1000, 20, testAct);

    EXPECT_EQ(test.getActionTest(110).healthEffect, 118);
}