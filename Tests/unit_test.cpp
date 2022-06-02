#include "gtest/gtest.h"

#include "itemTests.hpp"
#include "inventoryTests.hpp"
#include "regmob_test.hpp"
#include "bossmob_test.hpp"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
