#include <iostream>
using namespace std;

int main()
{
    // 172 times loop work
    for (int i = 19; i <= 190; i++)
    {
        if (i % 19 == 0)
        {
            cout << i << endl;
        }
    }

    // ANOTHER WAY

    // 19 times loop work
    // for (int i = 19; i <= 190; i = i + 19)
    // {
    //     cout << i << endl;
    // }
}