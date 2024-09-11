#include <iostream>
using namespace std;

int main()
{
    // formula of simple interest is P*R*T/100
    // p = principal , r = rate of interest , t = time.

    float p = 100;
    float r = 10;
    float t = 2;
    float si = p * r * t / 100; // si means simple interest

    cout << "Simple interest is : " << si << "%" << endl;
    // ans is 20%
}
