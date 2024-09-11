#include <iostream>
using namespace std;

int main()
{

    // Q. take iput of 3 sides and find that the triangle is valid or invalid.

    int a, b, c;
    cout << "Enter value of 1 side : ";
    cin >> a;
    cout << "Enter value of 2 side : ";
    cin >> b;
    cout << "Enter value of 3 side : ";
    cin >> c;

    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        cout << "Valid triangle";
    }
    else
    {
        cout << "Invalid triangle";
    }
}