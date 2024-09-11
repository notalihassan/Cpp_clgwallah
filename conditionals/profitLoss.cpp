#include <iostream>
using namespace std;

int main()
{

    // Q. find the profit and loss and also find the exact value of profit and loss?

    int cp; // cost price
    cout << "Enter the cost price : ";
    cin >> cp;

    int sp; // selling price
    cout << "Enter the selling price : ";
    cin >> sp;

    if (sp > cp)
    {
        cout << "Profit is : " << sp - cp;
    }
    else if (sp < cp)
    {
        cout << "Loss is : " << cp - sp;
    }
    else
    {
        cout << "No profit, no loss";
    }
}