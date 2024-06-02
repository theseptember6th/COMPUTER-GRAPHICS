#include <stdio.h>
#include <graphics.h>
#include<dos.h>
// Function prototypes
void drawLineBresenham(int x1, int y1, int x2, int y2);
int main() {
int gd = DETECT, gm;
char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
initgraph(&gd, &gm, data);
// Coordinates of the two endpoints of the line
int x1 = 100, y1 = 100;
int x2 = 50, y2 = 50;
// Call the function to draw the line
drawLineBresenham(x1, y1, x2, y2);
delay(5000); // Delay to view the output
closegraph();
return 0;
}
// Function to draw a line using Bresenham's algorithm
void drawLineBresenham(int x1, int y1, int x2, int y2) {
int dx, dy, p, x, y;
dx = x2 - x1;
dy = y2 - y1;
x = x1;
y = y1;
// Initial decision parameter
p = 2 * dy - dx;
// Plot the initial point
putpixel(x, y, WHITE);
// For each x from x1+1 to x2
for (int k = 0; k < dx - 1; k++) {
x++;
if (p < 0)
p = p + 2 * dy;
else {
p = p + 2 * dy - 2 * dx;
y++;
}
putpixel(x, y, WHITE); // Plot the point
}
}