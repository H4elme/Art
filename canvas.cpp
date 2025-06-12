#include "canvas.h"
#include "raylib.h"
#include "constants.h"
#include "cell.h"

Canvas::Canvas() {
    for (int i = 0; i < maxX; ++i) {
        for (int j = 0; j < maxY; ++j) {
            cells[i][j] = Cell(i, j);
            cells[i][j].fill(WHITE);
        }
    }
}

void Canvas::draw() {
    for (int i = 0; i < maxX; ++i) {
        for (int j = 0; j < maxY; ++j) {
            cells[i][j].fill(WHITE);
        }
    }
}
