#include <iostream>
using namespace std;

// Home Work
// Q. WAP TO PRINT PRODUCT OF DIGITS.

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    int product = 1;
    while (n != 0)
    {
        int ld = n % 10; // last digit
        n = n / 10;
        product = product * ld;
    }
    cout << "Product = " << product;
}