#include "canvas.h"
#include "raylib.h"
#include "constants.h"
#include "cell.h"

Canvas::Canvas(): x(0), y(0), maxX(20), maxY(20) {
    cells = new Cell*[maxX];
    for (int i = 0; i < maxX; i++) {
        cells[i] = new Cell[maxY];
    }
    for (int i = 0; i < maxX; i++) {
        for (int j = 0; j < maxY; j++) {
            cells[i][j] = Cell(i, j);
        }
    }
}

Canvas::Canvas(int x, int y, int maxX, int maxY): x(x), y(y), maxX(maxX), maxY(maxY) {
    cells = new Cell*[maxX];
    for (int i = 0; i < maxX; i++) {
        cells[i] = new Cell[maxY];
    }
    for (int i = 0; i < maxX; i++) {
        for (int j = 0; j < maxY; j++) {
            cells[i][j] = Cell(x + i, y + j);
        }
    }
}

void Canvas::draw() {
    for (int i = 0; i < maxX; ++i) {
        for (int j = 0; j < maxY; ++j) {
            cells[i][j].fill();
        }
    }
}

void Canvas::click() { 
    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        int mx = GetMouseX() / cellSize - x;
        int my = GetMouseY() / cellSize - y;
        if (mx >= 0 && mx < maxX && my >= 0 && my < maxY) {
            cells[mx][my].fill(getCurrentColor());
        }
    }
        else return;
}

int Canvas::getMaxX() const {
    return maxX;
}

int Canvas::getMaxY() const {
    return maxY;
}

Canvas::~Canvas() {
    for (int i = 0; i < maxX; ++i) {
        delete[] cells[i];
    }
    delete[] cells;
}

Color Canvas::getCurrentColor() const {
    return currentColor;
}

void Canvas::setCurrentColor(Color col) {
    currentColor = col;
}