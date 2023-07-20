/*
Insertion Sort :
===============================================================================
Insert an element from unsorted array to it's correct position in sorted array.
===============================================================================
*/

void InsertionSort(int arr[], int n)
{
    int current;
    for (int i = 1; i < n; i++)
    {
        current = arr[i];
        int j = (i-1);
        while ((arr[j] > current) && (j >= 0))
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    // return;
}

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

    InsertionSort(array, n);
    cout << "The Sorted Array Elements Will Be :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "The [" << i << "] Element is : " << array[i] << "  ";
    }
    return 0;
}