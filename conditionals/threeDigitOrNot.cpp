#include <iostream>
using namespace std;

int main()
{

    // we use logical operators like (&& for and) and (|| for or)

    int n;
    cout << "Enter the value : ";
    cin >> n;

    if (n > 99 && n < 1000)
    {
        cout << "3 digit number";
    }
    else
    {
        cout << "Not a 3 digit number";
    }

    // && means if both the coditions fullfil then the code will run
}