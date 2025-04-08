#include <gtest/gtest.h>

// Function to be tested
int Add(int a, int b) {
    return a + b;
}

// Test case for Add function
TEST(AdditionTest, HandlesPositiveNumbers) {
    EXPECT_EQ(Add(2, 3), 5);
}

TEST(AdditionTest, HandlesNegativeNumbers) {
    EXPECT_EQ(Add(-2, -3), -5);
}

TEST(AdditionTest, HandlesMixedNumbers) {
    EXPECT_EQ(Add(-2, 3), 1);
}

// Main function to run tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
