/*
Hexadecimal to Decimal :
============================================
Hexadeciaml base = 16. They have same 0 to 9
numbers but have some extra characters like,
A = 10 |------------------------------------
B = 11 |   These are some extra words in the
C = 12 |   Hexadecimal System from 10 to 15
D = 13 |   represented by letters from [A] 
E = 14 |   to [F]. It is used like if remai-
F = 15 |   der is in double digit.
============================================
*/

#include <bits/stdc++.h>
using namespace std;

int hexadecimaltodecimal(string n)
{
    int d, x = 1, sum = 0;
    int siz = n.size();

    for (int i = siz - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            sum += x*(n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            sum += x*(n[i] - 'A' + 10);
        }
        x *= 16;
    }
    
    return sum;
}
 
int main()
{
    string num;
    cout << "Enter the Hexadecimal Number : ";
    cin >> num;

    cout << "The Decimal Conversion is : " << hexadecimaltodecimal(num);
    return 0;
}