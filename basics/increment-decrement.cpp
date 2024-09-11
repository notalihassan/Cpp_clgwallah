#include <iostream>
using namespace std;

int main()
{

    // post increment a++
    // in post increment the value of a is printed first and then the value of a is increased by 1.

    int a = 5;
    cout << a++ << endl;

    cout << a-- << endl;

    // pre increment ++b
    // in pre increament the value of b is increased by 1 and then the value of b is printed.

    int b = 5;
    cout << ++b << endl; // b = b + 1;

    cout << --b << endl; // b = b - 1;
}