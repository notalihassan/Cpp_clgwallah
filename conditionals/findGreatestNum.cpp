#include <iostream>
using namespace std;

int main()
{

    // Q. take 3 positive input digits and print the greatest digit of them.

    int x, y, z;
    cout << "enter 1 digit : ";
    cin >> x;
    cout << "enter 2 digit : ";
    cin >> y;
    cout << "enter 3 digit : ";
    cin >> z;

    if (x > y && x > z)
    {
        cout << "Greatest number is : " << x;
    }
    else if (y > x && y > z)
    {
        cout << "Greatest number is : " << y;
    }
    else
    {
        cout << "Greatest number is : " << z;
    }
}