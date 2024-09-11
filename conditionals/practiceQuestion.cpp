#include <iostream>
using namespace std;

int main()
{

    int x = 3, y, z;
    y = x = 10;
    // in assignment opertaor we move grom right t left so x = 10
    //  and then y = x which is also 10
    z = x < 10;
    // in this < is more valuable than =
    // so x < 10 which is 10 < 10 and this is false
    // so its ans is 0. false = 0
    cout << x << " " << y << " " << z;
    // ans: 10 10 0
}