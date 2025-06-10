#include <gtest/gtest.h>
#include "../cell.h"
#include "raylib.h"

TEST(checkGtest, test1) {
    EXPECT_TRUE(true);
}

TEST(checkGtest, test2) {
    EXPECT_FALSE(false);
}

TEST(cellTests, test1) {
    Cell cell(1, 2);
    EXPECT_EQ(cell.getX(), 1);
    EXPECT_EQ(cell.getY(), 2);
}

TEST(cellTests, test2) {
    Cell cell(3, 4, RED);
    EXPECT_TRUE(ColorIsEqual(cell.getColor(), RED));
}


TEST(cellTests, test3) {
    Cell cell(5, 6);
    cell.fill(BLUE);
    EXPECT_TRUE(ColorIsEqual(cell.getColor(), BLUE));
}