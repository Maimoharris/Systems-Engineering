#include "raylib.h"
#include <vector>
#include <cmath>

struct Point {
    int x, y;
};

// Bresenham's Algorithm implementation
std::vector<Point> GetBresenhamLine(int x0, int y0, int x1, int y1) {
    std::vector<Point> points;
    int dx = std::abs(x1 - x0);
    int dy = std::abs(y1 - y0);
    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;
    int err = dx - dy;

    while (true) {
        points.push_back({x0, y0});
        if (x0 == x1 && y0 == y1) break;
        int e2 = 2 * err;
        if (e2 > -dy) { err -= dy; x0 += sx; }
        if (e2 <  dx) { err += dx; y0 += sy; }
    }
    return points;
}

int main() {
    const int windowWidth = 800;
    const int windowHeight = 600;
    const int pixelScale = 20; // Scale up the pixels so they are easy to see

    InitWindow(windowWidth, windowHeight, "Linux C++ Graphics - Bresenham's Algorithm");
    SetTargetFPS(60);

    // Initial default line points
    int startX = 5, startY = 5;
    int endX = 30, endY = 20;

    while (!WindowShouldClose()) {
        // Left click updates the line starting point
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            startX = GetMouseX() / pixelScale;
            startY = GetMouseY() / pixelScale;
        }
        // Right click updates the line destination point
        if (IsMouseButtonPressed(MOUSE_BUTTON_RIGHT)) {
            endX = GetMouseX() / pixelScale;
            endY = GetMouseY() / pixelScale;
        }

        // Compute the rasterized line path
        std::vector<Point> linePoints = GetBresenhamLine(startX, startY, endX, endY);

        BeginDrawing();
        ClearBackground(DARKGRAY);

        // 1. Draw background pixel grid guide lines
        for (int x = 0; x < windowWidth; x += pixelScale) DrawLine(x, 0, x, windowHeight, Fade(LIGHTGRAY, 0.2f));
        for (int y = 0; y < windowHeight; y += pixelScale) DrawLine(0, y, windowWidth, y, Fade(LIGHTGRAY, 0.2f));

        // 2. Render every pixel calculated by Bresenham's algorithm
        for (const auto& p : linePoints) {
            DrawRectangle(p.x * pixelScale, p.y * pixelScale, pixelScale - 1, pixelScale - 1, ORANGE);
        }

        // 3. Highlight the endpoints explicitly
        DrawRectangle(startX * pixelScale, startY * pixelScale, pixelScale - 1, pixelScale - 1, GREEN);
        DrawRectangle(endX * pixelScale, endY * pixelScale, pixelScale - 1, pixelScale - 1, RED);

        DrawText("Left-Click: Set Start | Right-Click: Set End", 15, 15, 20, WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
