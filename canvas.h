#ifndef CANVAS_H
#define CANVAS_H

#include "cell.h"

class Canvas {
    static const int cellSize = 40;
    int x, y;
    int maxX, maxY;
    Color currentColor = BLACK;
public:
    Cell **cells;
    Canvas();
    Canvas(int, int, int, int);
    void draw();
    void click();
    int getMaxX() const;
    int getMaxY() const;
    Color getCurrentColor() const;
    void setCurrentColor(Color);
    ~Canvas();
};

#endif