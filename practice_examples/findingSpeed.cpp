#include <iostream>
using namespace std;

int main()
{

    int d;
    int t;

    cout << "Enter the distance in meters : ";
    cin >> d;
    cout << endl;
    cout << "Enter the time: ";
    cin >> t;
    cout << endl;

    cout << "speed = " << d / t << " m/s" << endl;
}