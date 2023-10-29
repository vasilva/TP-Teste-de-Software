#include <gtest/gtest.h>

TEST(DataTest, TesteDataValida)
{
    Data dt;
    dt.addData(1, 2, 2023);
    EXPECT_TRUE(dt.valido());
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}