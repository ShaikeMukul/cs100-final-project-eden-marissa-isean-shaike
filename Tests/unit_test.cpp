#include "gtest/gtest.h"
#include "itemTests.hpp"
#include "inventoryTests.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}