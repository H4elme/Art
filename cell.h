#ifndef CELL_H
#define CELL_H

#include "raylib.h"

class Cell {
    int x, y;
    Color col;
public:
    int getX() const;
    int getY() const;
    Color getColor() const;
    Cell();
    Cell(int, int);
    Cell(int, int, Color);
    void fill(Color);
};

#endif