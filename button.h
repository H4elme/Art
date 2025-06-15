#ifndef BUTTON_H
#define BUTTON_H

#include "UIElement.h"

class Button : public UIElement {
    int x, y;
    int width, height;
public:
    virtual bool hover() override;
    Button(int, int, int, int);
    int getX() const;
    int getY() const;
    int getWidth() const;
    int getHeight() const;
};

#endif