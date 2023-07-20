/*
Checking Weather The number is Prime or not :
=============================================
By chking that a no. is not divisible by any 
no. from 2 to a no. less than that no. than 
it's a prime no.
=============================================
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number : ";
    cin >> num;
    bool flag = 0;

    /* 
    [ for (int i = 2; i < num; i++) ] is also right to use. 
    But, instead of checking upto [num - 1] we can simply chk till square root of [n]
    will save processing time and make the code more fast and efficient.
    */
    for (int i = 2; i <= sqrt(num); i++) 
    {
        if (num % i == 0)
        {
            cout << "[" << num << "] is Not A Prime Number";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "[" << num << "] is a Prime Number";

    return 0;
}