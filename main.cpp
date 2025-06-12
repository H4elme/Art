#include "raylib.h"
#include <iostream>
#include "constants.h"
#include "cell.h"
#include "canvas.h"


int main() {
    InitWindow(maxX * cellSize, maxY * cellSize, "window");
    SetTargetFPS(60);
    Canvas canvas;
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