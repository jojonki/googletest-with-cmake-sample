#include "../src/my_math.h"
#include <gtest/gtest.h>

namespace {
  class MyLibTest : public ::testing::Test{};

  TEST_F(MyLibTest, SqrFuncCheck) {
    EXPECT_EQ(sqr(3.0), 9.0);
    EXPECT_EQ(sqr(4.0), 16.0);
  }

  TEST_F(MyLibTest, SumFuncCheck) {
    EXPECT_EQ(sum(1.0, 2.0), 3.0);
  }
}


