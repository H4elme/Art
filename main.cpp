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
        BeginDrawing();
        ClearBackground(RAYWHITE);
        canvas.draw();
        Cell a(5, 10, RED);
        a.fill(RED);

        EndDrawing();
    }
    return 0;
}