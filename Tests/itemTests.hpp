#include "gtest/gtest.h"

#include "../Headers/Items.h"

TEST(ItemSuite, Constructor){
    Items apple;
    EXPECT_EQ(apple.getDamageEffect(), 0);
    EXPECT_EQ(apple.getHealthEffect(), 0);
    EXPECT_EQ(apple.getItemDescription(), "description");
    EXPECT_EQ(apple.getItemName(),"name");
    EXPECT_EQ(apple.getItemTag(), "tag");
}