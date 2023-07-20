/*
Sum Of The First N Natural No.s :
=================================
By, using this formula : 
            n*(n+1)
Sigma   =   ------- ;
               2
=================================
*/

#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cout << "Enter Value Of n : ";
    cin >> n;

    sum = ((n * (n + 1)) / 2);
    cout << "The Sum Of First [" << n << "] Natural No.s is : " << sum;
    return 0;
}