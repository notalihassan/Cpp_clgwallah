#include <iostream>
using namespace std;

// Q. WAP TO FIND SUM OF DIGITS.
// LIKE DIGITS ARE 1234 SO SUM IS 1+2+3+4=10

int main()
{

    int n;
    cout << "Enter number : ";
    cin >> n;

    // in this question we use 2 extra varibls to store numbers.

    int sum = 0;
    while (n != 0) // jub tk n = 0 na ho tb tk loop chlta rhe ga.
    {
        int ld = n % 10; // ld = last digit
        // any numbers % 10 = its last number like :- 1234 % 10 = 4
        n = n / 10;
        // numbers / 10 = numbers - last digit like:- 1234/10 = 123
        // n me se aik aik number kam hota jae ga at the end n=0 ho jae ga
        sum = sum + ld; // sum ke under sum or last digit ko add ktdein ge
    }
    cout << "Sum = " << sum;
}