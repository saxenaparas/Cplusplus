// Finding the maximum no. out of three given no.s :

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the three no.s :\n";
    cin >> a >> b >> c;

    cout << "The Greatest number is : ";
    if (a > b)
    {
        if (c > a)
        {
            cout << c;
        }
        else
        {
            cout << a;
        }
    }
    else
    {
        if (c > b)
        {
            cout << c;
        }
        else
        {
            cout << b;
        }
    }
    return 0;
}