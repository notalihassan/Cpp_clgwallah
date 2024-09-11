#include <iostream>
using namespace std;

int main()
{

    // Q. take positive integer and print the integer
    //  is divisible by 5 or 3 and not divisible by 15.

    int x;
    cout << "enter the number : ";
    cin >> x;

    if ((x % 5 == 0 || x % 3 == 0) && (x % 15 != 0))
    {
        cout << "divisible by 5 or 3";
    }
    else if (x % 5 != 0 || x % 3 != 0 || x % 15 != 0)
    {
        cout << "Not divisible by 3 or 5 or 15";
    }
    else
    {
        cout << "divisible by 15";
    }
}