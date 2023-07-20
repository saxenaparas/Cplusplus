/*
Output Sum Of Each Subarray :
======================================================================
Subarray :
----------
>> It's an continuous part of an array.
>> So, number of subarrays for an array is : [nC2 + n] or [n*(n+1)/2].
======================================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Size Of The Array : ";
    cin >> n;

    int array[n];
    cout << "Enter The Array Elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter The [" << i << "] Element : ";
        cin >> array[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += array[j];
            cout << sum << endl;
        }
    }
    return 0;
}