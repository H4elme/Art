#include "cell.h"
#include "raylib.h"
#include "constants.h"

Cell::Cell(int x_, int y_) : x(x_), y(y_), col(WHITE) {}

Cell::Cell(int x_, int y_, Color col_) : x(x_), y(y_), col(col_) {}

void Cell::fill(Color newCol) {
    col = newCol;
    #ifdef RAYLIB_DRAWING_ENABLED
    DrawRectangle(x * cellSize, y * cellSize, cellSize, cellSize, col);
    #endif
}

int Cell::getX() const {
    return x;
}

int Cell::getY() const {
    return y;
}

Color Cell::getColor() const {
    return col;
}