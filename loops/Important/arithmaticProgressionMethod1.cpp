#include <iostream>
using namespace std;

int main()
{

    // Q. Display this AP-1,3,5,7,9..... upto 'n' terms.and give input.

    // AP(an) = a1 + (n-1)d
    // d = a2 - a1  common difference

    int n;
    cout << "Enter the number : ";
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i += 2) // i+=2 bcz d=2 so the jump is 2
    // solve an = a1 + (n-1)d
    // a1 = 1 and d = 2 from AP-1,3,5,7...
    // so an = 2n-1
    {
        cout << i << endl;
    }
}