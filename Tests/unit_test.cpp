#include "gtest/gtest.h"

#include "bossmob_test.hpp"
#include "dungeonTests.hpp"
#include "inventoryTests.hpp"
#include "itemTests.hpp"
#include "playerTests.hpp"
#include "regmob_test.hpp"
#include "actions_tests.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

