#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    // Q. display this AP-4,7,10,13,16..... upto nth term.
    // an = 4 + (n-1)3
    // an = 4 + 3n -3
    // an = 3n+1

    for (int i = 4; i <= 3 * n + 1; i += 3) // d=3
    {
        cout << i << endl;
    }
}