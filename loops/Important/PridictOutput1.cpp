#include <iostream>
using namespace std;

int main()
{

    int i;
    while (i = 10) // assign it i=10
    {
        cout << i;
        i++;
    }

    // OUTPUT = infinite loop
    // it gives 10 10 10 10 10 10 .........which never stop
}