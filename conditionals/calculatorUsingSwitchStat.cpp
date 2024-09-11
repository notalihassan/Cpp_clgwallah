#include <iostream>
using namespace std;

int main()
{

    // Q. create a calculator using switch statement.
    //  take three inputs n1,n2 and opertor.
    // using basic operators like (+,-,*,/)

    int n1;
    cin >> n1;
    char op;
    cin >> op;
    int n2;
    cin >> n2;

    // when we can do with IF ELSE:
    if (op == '+')
    {
        cout << "Sum = " << n1 + n2;
    }
    else if (op == '-')
    {
        cout << "minus = " << n1 - n2;
    }
    else if (op == '*')
    {
        cout << "multiply = " << n1 * n2;
    }
    else if (op == '/')
    {
        cout << "divide = " << n1 / n2;
    }

    // when we use SWITCH STATEMENT :-
    switch (op) // main thing on which we work
    {
    case '+':
        cout << "sum = " << n1 + n2;
        break;
    case '-':
        cout << "minus = " << n1 - n2;
        break;
    case '*':
        cout << "multiply = " << n1 * n2;
        break;
    case '/':
        cout << "divide = " << n1 / n2;
        break;

    default:
        cout << "Invalid Operator";
        break;
    }
}