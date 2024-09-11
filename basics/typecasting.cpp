#include <iostream>
using namespace std;

int main()
{

    // Typecasting is used to convert one data type to another data type.like int to float or flot to int  or int to char etc.

    // Q.Take integer 'x' as input and print half of the number.

    int x;
    cout << "Enter the number : ";
    cin >> x;
    // cout << "Half of the number is : " << x / 2 << endl;

    // as we can see when the input number is even then the answer is correct but if the number is odd then the answer is not correct.so thats why we can use typecasting.we can convert the integer to float like this :-

    float y = (float)x;
    cout << "Half of the number is : " << y / 2 << endl;
}