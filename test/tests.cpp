#include <gtest/gtest.h>
#include "../cell.h"
#include "raylib.h"
#include "../canvas.h"

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

TEST(canvasTests, test1) {
    Canvas canvas;
    EXPECT_EQ(canvas.getMaxX(), 20);
    EXPECT_EQ(canvas.getMaxY(), 20);
}

TEST(canvasTests, test2) {
    Canvas canvas(0, 0, 20, 20);
    EXPECT_EQ(canvas.getMaxX(), 20);
    EXPECT_EQ(canvas.getMaxY(), 20);
}

TEST(canvasTests, test3) {
    Canvas canvas(0, 0, 20, 20);
    canvas.cells[0][0].fill(GREEN);
    EXPECT_TRUE(ColorIsEqual(canvas.cells[0][0].getColor(), GREEN));
}