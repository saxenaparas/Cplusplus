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
#include <cmath>
using namespace std;

void Armstrong(int num)
{
    int digit, sum = 0;
    for (int i = num; i > 0; (i /= 10))
    {
        digit = i % 10;
        sum += (digit * digit * digit);
    }

    if (sum == num)
        cout << "Yes";
    else
    {
        cout << "NO" << endl
             << "Since Sum is : " << sum;
    }
    return;
}
int main()
{
    int num;
    cout << "Enter The Number To Chk Wheather It's An Armstrong Number Or Not : " << endl;
    cin >> num;

    Armstrong(num);
    return 0;
}