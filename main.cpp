#include "raylib.h"
#include <iostream>
#include "constants.h"
#include "cell.h"
#include "canvas.h"


int main() {
    Canvas canvas(0, 3, 20, 20);
    InitWindow(canvas.getMaxX() * cellSize, canvas.getMaxY() * cellSize, "window");
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        SetMouseCursor(MOUSE_CURSOR_DEFAULT);  
        BeginDrawing();
        ClearBackground(RAYWHITE);
        canvas.draw();
        canvas.click();

        EndDrawing();
    }
    return 0;
}