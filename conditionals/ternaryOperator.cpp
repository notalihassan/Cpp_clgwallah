#include <iostream>
using namespace std;

// Ternary Operator
// when we have two conditions then we use ternary operator instead
// of if-else ok.
// like :-  (condition) ? if true : if false ;

int main()
{

    int n;
    cout << "enter value : ";
    cin >> n;

    // if (n % 2 == 0)
    // {
    //     cout << "Even number";
    // }
    // else
    // {
    //     cout << "Odd number";
    // }

    // when we use Ternary operator

    // (condition) ? if true : if false ;
    (n % 2 == 0) ? cout << "even no." : cout << "odd no.";
}