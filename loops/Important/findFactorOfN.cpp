#include <iostream>
using namespace std;

// // Q. Write a program to find the highest factor of 'n' (other than itself).

int main()
{

    int n;
    cout << "Enter number : ";
    cin >> n;

    int f = 1; // f mein heighest factor store krwain ge

    // //  FIRST PRINT ALL FACTORS OF N
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }

    // // DISPLAY HIGHEST FACTOR BUT THIS IS NOT GOOD CODE BCZ IT WORKS 59 TIMES
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            f = i;
        }
        cout << f;
    }

    // // WE CAN DIVIDE THE N/2 SO IT WORKS ONLY 30 TIMES BUT IT ALSO NOT A GOOD CODE
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            f = i;
        }
        cout << f;
    }

    // // IN THIS WE CAN DIPLAY DESCENDINGLY FACTORS
    // // AND THEN USE BREAK STATEMENT (which breaks the factor when highest factor is =)
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << i << endl; // in this we cantt store factor to f
            break;             // to go out of loop
        }
    }
}