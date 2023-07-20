/*
Finding The Minimum And Maximum Number From An Array :
=======================================================
In this we have used INT_MAX and INT_MIN these will be
used to assign min. and max. value existing in C++ to 
the variable. These are from <climits> library. Here 
we have [int maxNo = INT_MIN;] & [int minNo = INT_MAX;]
because we have to find them if we do opposite then the
[maxNo] and [minNo] will print the maximum and minimum 
possibe value in C++. Not from the array.
==========[TRY TO UNDERSTAND THIS CAREFULLY]===========
*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the values for array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the [" << (i + 1) << "] element : ";
        cin >> arr[i];
    }

    int maxNo = INT_MIN; // It assigns the minimum no. exist in c++, to use this we have to include <climits> library.
    int minNo = INT_MAX; // It assigns the maximum no. exist in c++, to use this we have to include <climits> library.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxNo)
        {
            maxNo = arr[i];
        }
        if (arr[i] < minNo)
        {
            minNo = arr[i];
        }
    }
    cout << "Minimum Number from array is : " << minNo << endl;
    cout << "Maximum Number from array is : " << maxNo;
    return 0;
}