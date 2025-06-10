#include "raylib.h"
#include <iostream>
#include "constants.h"
#include "cell.h"
#include "canvas.h"


int main() {
    InitWindow(maxX * cellSize, maxY * cellSize, "window");
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        Cell a(5, 10, RED);
        a.fill(RED);

        EndDrawing();
    }
    return 0;
}