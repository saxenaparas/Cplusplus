/*
Reverse Of A Number for 4-Digit Number :
========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int num, rev;
    cout << "Enter A 4-Digit Number : ";
    cin >> num;

    rev = num % 10;
    num = num / 10;
    rev = (rev * 10) + (num % 10);
    num = num / 10;
    rev = (rev * 10) + (num % 10);
    num = num / 10;
    rev = (rev * 10) + (num % 10);

    cout << "The Reversed No. Will Be : " << rev;

    return 0;
}