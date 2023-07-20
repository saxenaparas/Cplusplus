/*
Max Till i :
===============================================================
Find the Maximum In An Array Element Till It's [(i)th] element.
===============================================================
*/

#include <iostream>
#include <climits>
using namespace std;

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int n;
    cout << "Enter The Array Size : ";
    cin >> n;
    cout << endl;

    int array[n];
    cout << "Enter The : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "[" << i << "] Element : ";
        cin >> array[i];
    }
    cout << endl;

    int mx = INT_MIN;
    cout << "The Maximum In An Array Element Till It's :" << endl << endl;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, array[i]);
        cout << "[(" << i << ")th] Element is : " << mx << endl;
    }
    return 0;
}