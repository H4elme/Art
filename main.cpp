#include "raylib.h"
#include <iostream>
#include "constants.h"
#include "cell.h"
#include "canvas.h"
#include "UIElement.h"
#include "UIPanel.h"

int main() {
    const int panelMaxY = 3;
    UIPanel panel(0, 0, 20, panelMaxY, panelColor);
    Canvas canvas(0, panelMaxY, 20, 20);
    InitWindow(canvas.getMaxX() * cellSize, canvas.getMaxY() * cellSize, "window");
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        SetMouseCursor(MOUSE_CURSOR_DEFAULT);  
        BeginDrawing();
        ClearBackground(RAYWHITE);
        panel.draw();
        panel.click();
        canvas.draw();
        canvas.click();

        EndDrawing();
    }
    return 0;
}