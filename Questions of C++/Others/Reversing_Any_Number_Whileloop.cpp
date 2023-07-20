/*
Reverse Of A Number :
=====================
*/

#include <iostream>
using namespace std;

int main()
{
    int num, rev = 0;
    cout << "Enter The Number : ";
    cin >> num;

    while (num > 0)
    {
        int lastdigit = num % 10;
        rev = (rev * 10) + lastdigit;
        num = num / 10;
    }
    cout << "The Reversed Number Will Be : " << rev;
    return 0;
}