#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{

    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, NULL);

    int x1, x2, y1, y2, dY, dX, d;
    cout << "Enter starting X Co-Ordinate : ";
    cin >> x1;
    cout << "Enter starting Y Co-Ordinate : ";
    cin >> y1;
    cout << "Enter terminating X Co-ordinate : ";
    cin >> x2;
    cout << "Enter terminating Y Co-ordinate : ";
    cin >> y2;

    dY = y2 - y1;
    dX = x2 - x1;

    putpixel(x1, y1, WHITE);
    if (dY <= dX)
    {
        d = 2*dY - dX;
        int y = y1;
        for (int x = x1; x <= x2; x++)
        {
            if (d < 0)
                d = d + 2*dY;
            else
            {
                d = d + 2*(dY - dX);
                y = y + 1;
            }
            cout << x << "," << y << "\n";
            putpixel(x, y, WHITE);
        }
    }
    else
    {
        int x = x1;
        d = 2*dX - dY;
        for (int y = y1; y <= y2; y++)
        {
            if (d < 0)
                d = d + dX;
            else
            {
                d = d + 2*(dX - dY);
                x = x + 1;
            }
            cout << x << "," << y << "\n";
            putpixel(x, y, WHITE);
        }
    }

    getch();
    closegraph();
    return 0;
}