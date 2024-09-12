#include <iostream>
using namespace std;

// in this method we using extra variables and keeping i for only iteration.

int main()
{

    int n;
    cout << "Enter number : ";
    cin >> n;

    // Q. dislay AP-4,7,10,13..... nth term.

    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a + 3;
    }
}