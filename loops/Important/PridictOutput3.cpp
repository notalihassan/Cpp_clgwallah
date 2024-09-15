#include <iostream>
using namespace std;

int main()
{

    int x = 4, y = 0;
    while (x >= 0)
    {
        x--;
        y++;
        if (x == y)
        {
            continue;
        }
        else
        {
            cout << x << " " << y;
        }

        // OUTPUT : 3 1 1 3 0 4
    }

    // SOLUTION :-

    // x = decrement ( x = x - 1) and y = increment (y = y + 1)

    // 1.First iteration: x = 4, y = 0 → prints 3 1.
    // 2.Second iteration: x = 3, y = 1 → prints 2 2, but since x == y, continue skips the print.
    // 3.Third iteration: x = 2, y = 2 → prints 1 3.
    // 4.Fourth iteration: x = 1, y = 3 → prints 0 4.
    // 5.Fifth iteration: x = 0, y = 5 → exits the loop because x is no longer greater than or equal to 0.
}