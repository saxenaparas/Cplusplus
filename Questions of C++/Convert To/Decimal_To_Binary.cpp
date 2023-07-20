/*
Decimal To Binary :
====================================================
1.) We divide that no. by 2.
2.) Obtained remainder is our last digit.
3.) We again divide the quotient by 2.
4.) Again obtain the remainder as second last digit.
5.) Going on till we get quotient as zero.
====================================================
*/

#include <iostream>
using namespace std;

int DecimalToBinary(int n)
{
    int d, i = 1, sum = 0;
    while (n > 0)
    {
        d = n % 2;
        sum += i * d;
        i *= 10;
        n /= 2;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter The Decimal Number : ";
    cin >> num;

    cout << "The Binary Conversion Will Be : " << DecimalToBinary(num);
    return 0;
}