#include "gtest/gtest.h"

#include "../Headers/Inventory.h"

TEST(InventorySuite, addZeroItems){
    Inventory test1;
    EXPECT_EQ(test1.getSize(), 0);
}
