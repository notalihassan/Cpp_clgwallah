#include <iostream>
using namespace std;

int main()
{

    // Q. find absolute value of a number. absolute( number which is only positive ).

    int n;
    cout << "enter the value : ";
    cin >> n;

    if (n >= 0)
    {
        cout << "absolute value is : " << n;
    }
    else
    {
        cout << "absolute value is : " << -n;
    }
}