/*
Printing Prime No.s Between Two No.s :
================================================================================
>> A number which can't be divisible other than 1 and itself is called Prime no.
>> But to chk the divisibility condition from 2 to that number we can just chk 
   till sqrt(of that number) since numbers after sqrt(of that number) will be a 
   combination of product of those numbers.
================================================================================
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter The 1st No. : ";
    cin >> n;
    cout << "Enter The 2nd No. : ";
    cin >> m;
    bool flag = 0;

    for (int i = n; i <= m; i++)
    {
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                continue;
            }
        }
        
        if (flag == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}