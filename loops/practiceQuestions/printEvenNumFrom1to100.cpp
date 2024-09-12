#include <iostream>
using namespace std;

int main()
{
    // 100 times loop work
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }

    // another way
    // 50 times loop work
    for (int i = 2; i <= 100; i = i + 2) // i++ means i = i + 1
    {
        cout << i << endl;
    }
}