/*
Armstrong Number :
==================
In this sum of cubes of digits of a number is a number itself.
--------------------------------------------------------------
Example :- [153] : (1)^3 + (5)^3 + (3)^3 ;
               = 1 + 125 + 9 ;
               = 153 .
        [So, 153 is a Armstrong Number]
--------------------------------------------------------------
[IMPORTANT] : sum += pow(digit, 3); will give a wrong answer 
since, pow() function have a probleum in the current [g++] 
compiler may be due to [pow()] takes value in doubles also can
be responsible for the error. Eg :if, we calculate [pow(10,2)]
instead of [100] it will return [99]. Also, [pow()] is slow 
i.e. if we do [x*x] is faster as compared to [pow(x,2)]. So,
==========[AT LAST AVOID USING [pow()] FUNCTION]==============
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, count, digit, sum = 0;
    cout << "Enter A Three Digit Number : ";
    cin >> num;
    count = num;

    while (count > 0)
    {
        digit = count % 10;
        sum += (digit * digit * digit);
        count /= 10;
    }

    if (sum == num)
        cout << "It's An Armstrong Number";
    else
    {
        cout << "It's Not An Armstrong Number" << endl;
        cout << sum;
    }
    return 0;
}