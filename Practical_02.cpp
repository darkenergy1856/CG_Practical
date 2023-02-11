#include <iostream>
#include <graphics.h>

using namespace std;

void drawPoint(int x, int y)
{
    putpixel(x, y, WHITE);
    cout << x << "," << y << "\n";
    putpixel(y, x, WHITE);
    cout << y << "," << x << "\n";
    putpixel(-x, y, WHITE);
    cout << -x << "," << y << "\n";
    putpixel(y, -x, WHITE);
    cout << y << "," << -x << "\n";
    putpixel(x, -y, WHITE);
    cout << x << "," << -y << "\n";
    putpixel(-y, x, WHITE);
    cout << -y << "," << x << "\n";
    putpixel(-x, -y, WHITE);
    cout << -x << "," << -y << "\n";
    putpixel(-y, -x, WHITE);
    cout << -y << "," << -x << "\n";
}

int main()
{
    initwindow(960, 540);
    int radius;

    cout << "Enter Radius of the Circle : ";
    cin >> radius;

    float d = float(5 / 4) - radius;
    int x = 0;
    int y = radius;

    drawPoint(x, y);

    while (y > x)
    {
        if (d < 0)
        {
            d = d + 2 * x + 3;
            x++;
        }
        else
        {
            d = d + 2 * x - 2 * y + 5;
            x++;
            y--;
        }
        drawPoint(x, y);
    }

    getch();
    closegraph();
    return 0;
}
