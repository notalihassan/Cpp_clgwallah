#include <iostream>
using namespace std;

// Home Work
// Q. WAP TO PRINT SUM OF ALL THE EVEN DIGITS.

int main()
{

    int n;
    cout << "Enter number : ";
    cin >> n;

    int sum = 0;
    while (n != 0)
    {
        int ld = n % 10;
        if (ld % 2 == 0)
        {
            sum = sum + ld;
        }
        else
        {
            n = n / 10;
        }
    }
    cout << "Sum = " << sum;
}