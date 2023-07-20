/*
Octal To Decimal :
==================
Octal has base 8.
*/

#include <iostream>
using namespace std;

int octaltodecimal(int n)
{
    int d, i = 1, sum = 0;
    while (n > 0)
    {
        d = n % 10;
        sum += i * d;
        i *= 8;
        n /= 10;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter the Octal Number : ";
    cin >> num;

    cout << "The Decimal Conversion is : " << octaltodecimal(num);
    return 0;
}
