#include <iostream>
using namespace std;

// Q. WAP TO FIND NUMBER OF DIGITS.

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int count = 0; // use extra variable to store value
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    cout << "Number of digits are : " << count;
}