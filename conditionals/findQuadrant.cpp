#include <iostream>
using namespace std;

int main()
{

    // Q. given a point (x,y), write a program to find out if it lies
    // in the 1 quadrant, 2 quad, 3 quad, 4 quad, on the x-axis, y-axis
    // or at the origin(0,0)?

    // Input the point (x, y)
    float x, y;
    cout << "Enter the coordinates x : ";
    cin >> x;
    cout << "Enter the coordinates y : ";
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << "The point is in the 1st quadrant." << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "The point is in the 2nd quadrant." << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "The point is in the 3rd quadrant." << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "The point is in the 4th quadrant." << endl;
    }
}