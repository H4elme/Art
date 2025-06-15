#include "button.h"
#include "raylib.h"
#include "constants.h"

Button::Button(int x_, int y_, int width_, int height_): x(x_), y(y_), width(width_), height(height_) {}

bool Button::hover() {
    Vector2 mousePos = GetMousePosition();
    double mx = mousePos.x;
    double my = mousePos.y;
    bool res = (mx >= x * cellSize && mx <= x * cellSize + width && 
        my >= y * cellSize && my <= y * cellSize + height);
    return res;
}

int Button::getX() const { return x; }
int Button::getY() const { return y; }
int Button::getWidth() const { return width; }
int Button::getHeight() const { return height; }