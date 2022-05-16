#include "gtest/gtest.h"

#include "../Headers/RegularMob.h"

TEST(RegularMob, DefaultConstructor){
    RegularMob test;
    EXPECT_EQ(test.getDamage(), 0);
    EXPECT_EQ(test.getHealth(), 0);
    EXPECT_EQ(test.getDescription(), "Undefined Monster Description");
    EXPECT_EQ(test.getName(), "Undefined Monster");
}