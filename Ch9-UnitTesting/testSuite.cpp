#include <gtest/gtest.h>
#include "functions.h"

TEST(functions, add)
{
    GTEST_ASSERT_EQ(add(10, 22), 32);
    
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}