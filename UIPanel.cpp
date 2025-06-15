#include "UIElement.h"
#include "UIPanel.h"
#include "raylib.h"
#include <vector>
#include "constants.h"
#include "colorButton.h"

UIPanel::UIPanel(int x_, int y_, int maxX_, int maxY_, Color backgroundColor_): 
        x(x_), y(y_), maxX(maxX_), maxY(maxY_), backgroundColor(backgroundColor_) {}
    
void UIPanel::addElement(UIElement* newElement) {
    elements.push_back(newElement);
}

void UIPanel::draw() {
    #ifdef RAYLIB_DRAWING_ENABLED
    DrawRectangle(x, y, (maxX - x) * cellSize, (maxY - y) * cellSize, backgroundColor);
    for (auto el : elements) {
        el->draw();
    }
    #endif
}

bool UIPanel::hover() {
    Vector2 mousePos = GetMousePosition();
    int mx = mousePos.x / cellSize;
    int my = mousePos.y / cellSize;
    return (mx >= x && mx <= maxX && my >= y && my <= maxY);
}

void UIPanel::click() {
    if (!IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) return;
    if (!hover()) return;

    ColorButton* currentButton = nullptr;

    for (auto el : elements) { 
        if (el->hover()) {
            el->click();
            currentButton = dynamic_cast<ColorButton*>(el);
        }
    }

    if (currentButton == nullptr) return;
    
    for (auto el : elements) {
        if (el != currentButton) {
            ColorButton* colorButton = dynamic_cast<ColorButton*>(el);
            if (colorButton) {
                colorButton->unchoose();
            }
        }
    }
}

UIPanel::~UIPanel() {
    elements.clear();
}