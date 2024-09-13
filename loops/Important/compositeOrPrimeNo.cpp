#include <iostream>
using namespace std;

// Q. find the number is prime or composite.

int main()
{

    int n;
    cout << "Enter number : ";
    cin >> n;

    bool flag = true; // means prime number and this is boolean

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false; // means composite number
        }
    }

    if (n == 1)
    {
        cout << "Neither Prime nor Composite";
    }
    else if (flag == true)
    {
        cout << "Prime";
    }
    else
    {
        cout << "composite";
    }
}