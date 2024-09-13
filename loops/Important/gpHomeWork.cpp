#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter number : ";
    cin >> n;

    // Q. Display GP-3,12,48 ..... upto nth term.

    int a = 3; // a1
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a * 4; // bcz common ratio is 4
    }
}