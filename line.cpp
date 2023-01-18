#include <iostream>
#include <graphics.h>
using namespace std;

int round(float x)
{
    int temp = x;
    float y = x - temp;
    if (y >= 0.5)
    {
        return temp + 1;
    }
    return temp;
}

int main()
{
    int gd = DETECT, gm, color;
    initgraph(&gd, &gm, NULL);

    int x1, x2, y1, y2;
    float m = 0.0;
    cout << "Enter starting X Co-Ordinate : ";
    cin >> x1;
    cout << "Enter starting Y Co-Ordinate : ";
    cin >> y1;
    cout << "Enter terminating X Co-ordinate : ";
    cin >> x2;
    cout << "Enter terminating Y Co-ordinate : ";
    cin >> y2;
    m = float(y2 - y1) / float(x2 - x1);

    cout << "Slope of the line is : " << m << "\n";

    float y = y1;

    for (int x = x1; x <= x2; x++)
    {
        cout << x << "," << round(y) << "\n";
        putpixel(x, round(y) ,WHITE);
        y += m;
    }
    getch();
    closegraph();
    return 0;
}
