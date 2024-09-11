#include <iostream>
using namespace std;

// Q. take input of 3 students and find the youngest student without using multiple conditions.

int main()
{

    int a;
    cout << "Ali Enter your age : ";
    cin >> a;

    int b;
    cout << "Bilal Enter your age : ";
    cin >> b;

    int c;
    cout << "Chishti Enter your age : ";
    cin >> c;

    if (a < b)
    {
        if (a < c)
        {
            cout << "Ali is the youngest";
        }
        else
        {
            cout << "Chishti is the youngest";
        }
    }
    else
    {
        if (b < c)
        {
            cout << "Bilal is the youngest";
        }
        else
        {
            cout << "Chishti is the youngest";
        }
    }
}
