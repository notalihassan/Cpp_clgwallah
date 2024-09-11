#include <iostream>
using namespace std;

int main()
{

    int l; // length
    cout << "Enter the length : ";
    cin >> l;

    int w; // width
    cout << "Enter the width : ";
    cin >> w;

    // Q. area of rectangle = l * W
    int ar; // area of rectangle
    ar = l * w;
    cout << "Area of rectangle is : " << ar << endl;

    // Q. perimeter of recatngle = 2( L + W)
    int pr; // perimeter of rectangle
    pr = 2 * (l + w);

    cout << "Perimeter of rectangle is : " << pr << endl;

    // Q. find wheter the area of rectangle is greater than perimeter or not??

    if (ar > pr)
    {
        cout << "Area of rectangle is greater than perimeter of recatangle";
    }
    else
    {
        cout << "Area of rectangle is not greater than perimeter of recatangle";
    }
}