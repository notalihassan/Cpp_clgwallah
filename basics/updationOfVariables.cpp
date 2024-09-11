#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    cout << x << endl;
    // this is called updation of variable.
    x = 10;
    cout << x << endl;

    // more examples

    int a = 25;
    a = 34;
    cout << a << endl;
    a = a + 54;
    cout << a << endl;
    // the ans is 88 because we asigned a = a + 54; that means a = 34 + 54 = 88. the = is the assign operator not the equal operator in coding.
    a = a * 2;
    cout << a << endl;

    int y = 2;
    y = y + 8;
    cout << y << endl;
    y = y * 5;
    cout << y << endl;

    // we can also use some operators like +=, -=, ++, -- etc.

    int z = 5;
    z += 5; // z = z + 5; so the ans is 10
    cout << z << endl;

    z++; // z = z + 1; so the ans is 11
    cout << z << endl;
}
