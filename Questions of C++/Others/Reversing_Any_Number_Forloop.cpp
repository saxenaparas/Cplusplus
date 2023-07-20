/*
Reverse Of A Number :
=====================
*/

#include <iostream>
using namespace std;

int main()
{
    int num, rev = 0, n = 0;
    cout << "Enter The Number : ";
    cin >> num;
    int count = num;

    while (count > 0)
    {
        count = count / 10;
        n++;
    }
    for (int i = 0; i < n; i++)
    {
        rev = (rev * 10) + (num % 10);
        num = num / 10;
    }

    cout << "The Reversed No. Will Be : " << rev;
    return 0;
}