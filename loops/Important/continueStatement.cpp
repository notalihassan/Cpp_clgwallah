#include <iostream>
using namespace std;

//  CONTINUE STATEMENT :- means skip a particular round(loop)
// Q. print 1 to 20 and skip 3 and 8

int main()
{

    for (int i = 1; i <= 20; i++)
    {
        if (i == 3 || i == 8)
        {
            continue;
        }

        cout << i << endl;
    }
}