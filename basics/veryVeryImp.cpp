#include <iostream>
using namespace std;

int main()
{
    float x = 5 / 2;
    cout << x << endl
         << endl;

    // when the first and second value is integer the result will be integer.like 5/2 = 2.even we use float operator.

    float a = 5 / 2;     // it gives int value
    float b = 5.0 / 2;   // it gives float value
    float c = 5 / 2.0;   // it gives float value
    float d = 5.0 / 2.0; // it gives float value

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
}