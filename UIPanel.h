#ifndef UIPANEL_H
#define UIPANEL_H

#include "raylib.h"
#include "UIElement.h"
#include <vector>

class UIPanel : public UIElement {
    int x, y, maxX, maxY;
    Color backgroundColor;
public:
    std::vector<UIElement*> elements;
    UIPanel(int x_, int y_, int width_, int height_, Color backgroundColor_);
    void addElement(UIElement* newElement);
    void draw() override;
    void click() override;
    bool hover() override;
    ~UIPanel();
};

#endif