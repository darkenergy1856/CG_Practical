//  Write a program to clip a line using Cohen and Sutherland line clipping algorithm.
#include <iostream>
#include <graphics.h>

using namespace std;

int xMin = 0, xMax = 0, yMin = 0, yMax = 0;

int regionFinder(int x, int y)
{
    // TBRL
    int region[] = {0, 0, 0, 0};

    if (y > yMax)
    {
        region[0] = 1;
    }
    if (y < yMin)
    {
        region[1] = 1;
    }
    if (x > xMax)
    {
        region[2] = 1;
    }
    if (x < xMin)
    {
        region[3] = 1;
    }

    return ((1000 * region[0]) + (100 * region[1]) + (10 * region[2]) + (region[3]));
}

int main()
{
    initwindow(960, 540);
    int startX = 0;
    int startY = 0;
    int endX = 0;
    int endY = 0;

    int startRegion = 0000;
    int endRegion = 0000;

    cout << "Note: Provide all the Input in Positive Value.(X,Y>0)\n";

    cout << "Enter X Min : \n";
    cin >> xMin;
    cout << "Enter Y Min : \n";
    cin >> yMin;
    cout << "Enter X Max : \n";
    cin >> xMax;
    cout << "Enter Y Max : \n";
    cin >> yMax;

    cout << "Enter starting X Co-Ordinate of the Line.\n";
    cin >> startX;
    cout << "Enter starting Y Co-Ordinate of the Line.\n";
    cin >> startY;
    cout << "Enter ending X Co-Ordinate of the Line.\n";
    cin >> endX;
    cout << "Enter ending Y Co-Ordinate of the Line.\n";
    cin >> endY;

    if (xMax <= xMin || yMax <= yMin || xMin < 0 || yMin < 0 || startX < 0 || startY < 0 || endX < 0 || endY < 0)
    {
        cout << "Invalid Input Program will exit.";
        return 1;
    }

    startRegion = regionFinder(startX, startY);
    endRegion = regionFinder(endX, endY);

    if (startRegion != 0000 && endRegion != 0000)
    {
        cout << "Line is out of the Region.";
    }


    getch();
    closegraph();
    return 0;
}