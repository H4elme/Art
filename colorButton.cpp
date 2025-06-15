#include "colorButton.h"
#include "raylib.h"
#include "button.h"
#include "constants.h"
#include "canvas.h"
#include <functional>

ColorButton::ColorButton(): Button(0, 0, 0, 0), col(BLACK), onClickCallback(nullptr) {}

ColorButton::ColorButton(int x_, int y_, int size, Color col_, std::function <void(Color)> onClickCallback_):
 Button(x_, y_, size, size), col(col_), onClickCallback(onClickCallback_) {}

Color ColorButton::getCol() const {
    return col;
}

void ColorButton::draw() {
    #ifdef RAYLIB_DRAWING_ENABLED
    int size = getWidth();
    DrawRectangle(getX() * cellSize, getY() * cellSize, size, size, getCol());
    DrawRectangle(getX() * cellSize, getY() * cellSize, size, size, Fade(getCol(), 0.5f));
    #endif
}

void ColorButton::click() {
    if (hover()) {
        onClickCallback(getCol());
    }
}