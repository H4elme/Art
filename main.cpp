#include "raylib.h"
#include "constants.h"
#include "cell.h"
#include "canvas.h"
#include "UIElement.h"
#include "UIPanel.h"
#include "colorButton.h"
#include "button.h"

int main() {
    const int panelMaxY = 3;
    const int canvasSize = 19;
    const Color CYAN = {0, 255, 255, 255};
    const Color colors[9] = {BLACK, RED, ORANGE, YELLOW, GREEN, CYAN, BLUE, VIOLET, WHITE};

    UIPanel panel(0, 0, canvasSize, panelMaxY, panelColor);
    Canvas canvas(0, panelMaxY, canvasSize, canvasSize);

    ColorButton* ColorButtons = new ColorButton[9];

    for (int i = 0; i < 9; i++) {
        ColorButtons[i] = ColorButton(2 * i + 1, 1, cellSize, colors[i],  
    [&canvas](Color c) {
        canvas.setCurrentColor(c);
    });
        panel.addElement(&ColorButtons[i]);
    }
    
    ColorButtons[0].click();

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