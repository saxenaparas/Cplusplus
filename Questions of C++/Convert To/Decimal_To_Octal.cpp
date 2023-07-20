/*
Decimal To Octal :
===================================================
1.) We divide by the number by 8.
2.) Then the first remainder is last digit.
3.) Then we again divide the quotient by 8.
4.) Then the second remainder is second last digit.
5.) We go on till quotient becomes zero.
===================================================
*/

#include <iostream>
using namespace std;

int OctalToBinary(int n)
{
    int d, i = 1, sum = 0;
    while (n > 0)
    {
        d = n % 8;
        sum += i * d;
        i *= 10;
        n /= 8;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter The Decimal Number : ";
    cin >> num;

    cout << "The Octal Conversion Will Be : " << OctalToBinary(num);
    return 0;
}