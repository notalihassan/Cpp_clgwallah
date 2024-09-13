#include <iostream>
using namespace std;

// Q. Display GP-1,2,4,8,16,32...... upto nth term.
// GP means common ratio btw two points like in this question
// the common ratio is 2 like 1 * 2 = 2, 2 * 2 = 4 and so on....

int main()
{

    int n;
    cout << "Enter number : ";
    cin >> n;

    // we use the 2method of AP.

    int a = 1; // a1
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a * 2;
    }
}