#include "lembrete.h"
#include <gtest/gtest.h>

// https://google.github.io/googletest/reference/assertions.html

TEST(DataTest, TestDataValida)
{
    Data dt, dt2;
    dt.addData(2, 3, 2023);
    dt2.addData(3, 3, 2023);
    EXPECT_TRUE(dt.valido());
}
