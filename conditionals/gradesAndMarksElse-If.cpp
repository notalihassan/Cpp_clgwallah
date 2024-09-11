#include <iostream>
using namespace std;

// Q. take input percentage of a student and print grade according to marks.

int main()
{

    int n;
    cout << "Enter your percentage : ";
    cin >> n;

    if (n >= 81 && n <= 100)
    {
        cout << "Grade : Very Good";
    }
    else if (n >= 61 && n <= 80) // or (n >= 61)
    {
        cout << "Grade : Good";
    }
    else if (n >= 41 && n <= 60) // or (n >= 41)
    {
        cout << "Grade : Average";
    }
    else
    {
        cout << "Grade : Fail";
    }
}