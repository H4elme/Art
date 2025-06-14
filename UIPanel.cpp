#include "UIElement.h"
#include "UIPanel.h"

UIPanel::UIPanel(int x_, int y_, int width_, int height_, Color backgroundColor_): 
        x(x_), y(y_), width(width_), height(height_), backgroundColor(backgroundColor_) {}
    
void UIPanel::addElement(UIElement* newElement) {
    elements.push_back(newElement);
}

void UIPanel::draw() {
    #ifdef RAYLIB_DRAWING_ENABLED
    DrawRectangle(x, y, width, height, backgroundColor);
    #endif
}

bool UIPanel::hover() {
    Vector2 mousePos = GetMousePosition();
    int mx = mousePos.x;
    int my = mousePos.y;
    return (mx >= x && mx <= x + width && my >= y && my <= y + height);
}

void UIPanel::click() {
    for (auto el : elements) { 
        el->click();
    }
}

UIPanel::~UIPanel() {
    elements.clear();
}