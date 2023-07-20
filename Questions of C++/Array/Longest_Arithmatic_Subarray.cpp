/*
Length Of Longest Arithmatic Subarray :
==================================================================
>> Here, The difference b/w two consecutive elements will be same.
>> Find the longest subarray with this property.
================================================================== 
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
        cout << "[" << i << "] Element : ";
        cin >> array[i];
    }

    int ans = 2;
    int pd = array[1] - array[0];
    int current = 2;

    for (int j = 2; j < n; j++)
    {
        if (pd == (array[j] - array[j - 1]))
        {
            current++;
        }
        else
        {
            pd = (array[j] - array[j - 1]);
            current = 2;
        }
        ans = max(ans, current);
    }

    cout << "Length Of Longest Arithnatic Subarray is : " << ans << endl;
    return 0;
}