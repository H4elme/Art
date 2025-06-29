#ifndef COLORBUTTON_H
#define COLORBUTTON_H

#include "raylib.h"
#include "button.h"
#include <functional>

class ColorButton : public Button {
    Color col;
    std::function <void(Color)> onClickCallback;
    static const int outline = 3;
    bool chosen = 0;
public:
    ColorButton();
    ColorButton(int x_, int y_, int size, Color col_, std::function <void(Color)> onClickCallback_ = nullptr);
    void draw() override;
    void click() override;
    Color getCol() const;
    void unchoose();
};

#endif