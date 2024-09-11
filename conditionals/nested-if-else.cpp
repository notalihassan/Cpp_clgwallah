#include <iostream>
using namespace std;

int main()
{

    // Q. take 3 positive input digits and print
    // the greatest digit of them.without using multiple conditions

    int a, b, c;
    cout << "enter 1 digit : ";
    cin >> a;
    cout << "enter 2 digit : ";
    cin >> b;
    cout << "enter 3 digit : ";
    cin >> c;

    // a > b and a > c -> a > c so a is greatest

    if (a > b) // b can never be greatest
    {
        if (a > c)
        {
            cout << a << " is the greatest number";
        }
        else // c > a and a > b -> c > a > b
        {
            cout << c << " is the greatest number";
        }
    }
    else // b > a
    {
        if (b > c)
        {
            cout << b << " is the greatest number";
        }
        else // c > b and c > a ,  c > b > a
        {
            cout << c << " is the greatest number";
        }
    }
}