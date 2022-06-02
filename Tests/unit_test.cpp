#include "gtest/gtest.h"

#include "regmob_test.hpp"
#include "bossmob_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
