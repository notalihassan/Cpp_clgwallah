#include <iostream>
using namespace std;

// Q. print 1 to 100 odd numbers using continue statement.

int main()
{

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }

        cout << i << endl;
    }
}