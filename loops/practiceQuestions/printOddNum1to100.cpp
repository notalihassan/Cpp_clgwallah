#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }

    // another method

    // for (int i = 1; i <= 99; i = i + 2)  //i++ means i = i + 1
    // {
    //     cout << i << endl;
    // }
}