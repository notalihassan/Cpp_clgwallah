#include <iostream>
using namespace std;

// BREAK STATEMENT :- is used to go out of loop when the condition is completed.

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            break; // to go out of loop
        }
    }

    // WITHOUT BREAK STATEMENT
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            // it print all factors in descending order
        }
    }
}