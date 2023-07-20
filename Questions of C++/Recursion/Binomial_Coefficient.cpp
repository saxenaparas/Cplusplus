/*
Binary Coefficient :
====================
Here,
     nCr = n!/((n-r)! * r!) ;

     or,

                n!
    nCr  =  ----------- ;
            (n-r)! x r!
*/

#include <iostream>
using namespace std;

int facto(int a)
{
    if ((a == 1) || (a == 0))
    {
        return 1;
    }
    return (a * facto(a - 1));
}

int main()
{
    int n, r, C;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter r : ";
    cin >> r;

    C = (facto(n) / (facto(n - r) * facto(r)));
    cout << "The Value of [" << n << "C" << r << "] is : " << C;
    return 0;
}