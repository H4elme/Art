#ifndef CANVAS_H
#define CANVAS_H

#include "cell.h"

class Canvas {
    static const int cellSize = 40;
    static const int maxX = 20;
    static const int maxY = 20;
public:
    Cell cells[maxX][maxY];
    Canvas();
    void draw();

};

#endif