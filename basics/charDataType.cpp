#include <iostream>
using namespace std;

int main()
{

    char x = 'a';
    cout << x << endl;

    // ASCII VALUES (V.V.V.IMPORTANT)

    // remember these ASCII values and add 1 to get the next ASCII value of next character.

    // small a = 97  and others are b = 97+1, c = 97+2, d = 97+3, e = 97+4,f = 97+5, g = 97+6,... z = 97+25

    // capital A = 65 and others are B = 65+1, C = 65+2, D = 65+3, E = 65+4, ... Z = 65+25

    // 0 = 48  and others are 1 = 48+1, 2 = 48+2, 3 = 48+3, 4 = 48+4

    // Q. how to find ASCII value?

    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << (int)ch; //(int) is typecasting operator.
}