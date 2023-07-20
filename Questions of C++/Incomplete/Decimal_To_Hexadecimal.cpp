/*
Decimal To Hexadecimal :
=================================================
.) We divide the number by 16.
.) The remainder is the last digit.
.) If the remainder is greater than 9 then, from 
   10 to 15 we use letters from [A] to [F].
.) Then we further divide the quotient by 16.
.) Then the Obtained remiander is 2nd last digit.
.) We go on till quotient becomes zero.
=================================================
*/

int DecimalToHexa(int n)
{
    int d, i = 0, sum = 0;
    while (n > 0)
    {
        d = n%16;
        sum += i*d;
        i *= 10;
        n /= 16; 
    }
    return sum;
}

#include <iostream>
using namespace std;
 
int main()
{
    int num;
    cout << "Enter The Decimal Number : ";
    cin >> num;

    cout << "The Binary Conversion Will Be : " << DecimalToHexa(num);
    return 0;
}

// INCOMPLETE INCOMPLETE INCOMPLETE INCOMPLETE INCOMPLETE INCOMPLETE INCOMPLETE INCOMPLETE INCOMPLETE 