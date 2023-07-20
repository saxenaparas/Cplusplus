/*
Binary Search :
===================================================================
+> In this we don't search linearly but from the mid of the array.
+> It is only works for array elements arranged in ascending order.
+> Binary search complexity is less than linear searching.
+> Here is also a condition same as linear searching that elements
   should be present in assending order.
+> It's based on starting and ending points notice that.
+> It's Time complexity is log(n) base 2 [here, n is the size of
   the array].
===================================================================
*/

#include <iostream>
using namespace std;

int BinarySearch(int a[], int n, int key)
{
    int s = 0, e = n; // Here, Defining the starting and ending point.
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            e = (mid - 1);
        }
        else
        {
            s = (mid + 1);
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter The Size Of The Array : ";
    cin >> n;

    int arr[n];
    cout << "Enter The Array Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter The [" << i << "] Element : ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter The Key To Search : ";
    cin >> key;

    cout << "The Indexing Position is : " << BinarySearch(arr, n, key);
    return 0;
}