#include <graphics.h>
#include <iostream>
#include <cmath> // Include cmath for fabs

using namespace std;

int main() {
    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; // Path to the BGI library
    initgraph(&gd, &gm, data);

    float x, y, x1, y1, x2, y2, dx, dy, step;

    cout << "Enter the first coordinate of the line (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the second coordinate of the line (x2 y2): ";
    cin >> x2 >> y2;

    dx = x2 - x1;
    dy = y2 - y1;

    if (fabs(dx) >= fabs(dy)) {
        step = fabs(dx);
    } else {
        step = fabs(dy);
    }

    float x_increment = dx / step;
    float y_increment = dy / step;

    x = x1;
    y = y1;

    int i = 0;
    while (i <= step) {
        putpixel(x, y, RED);
        x += x_increment;
        y += y_increment;
        i++;
        delay(100); // To visualize the drawing process
    }

    cout << "Press any key to exit...";
    cin.ignore(); //This ignores the newline character left in the input buffer by the previous cin operations.Without this, the subsequent cin.get() would immediately read this leftover newline and exit, not giving the  a chance to press another key
    cin.get(); // To keep the graph window open until a key is pressed

    closegraph();
    return 0;
}
