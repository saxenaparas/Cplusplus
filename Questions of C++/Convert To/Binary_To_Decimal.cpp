/*
Binary To Decimal :
===================
Binary has base 2.
*/

#include <iostream>
using namespace std;

int BinarytoDecimal(int n)
{
    int d, i = 1, sum = 0;
    while (n > 0)
    {
        d = n % 10;
        sum += i * d;
        i *= 2;
        n /= 10;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter The Binary Number : ";
    cin >> num;

    cout << "The Converted Decimal Form Will be : " << BinarytoDecimal(num);
    return 0;
}