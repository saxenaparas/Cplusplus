/*
Bubble Sorting :
=====================================================================
Repeatedily sort two adjacent elements
if, they are in wrong order.
=====================================================================
[+]> Here, we have to initialize the value of i to 1.
---------------------------------------------------------------------
[++]> Since, here as we can see that arr[j+1] which for [j = (n-1)] 
     becomes arr[n] and indexing of array is from [0] to [n-1] arr[n] 
     which doesn't exist so for [i = 0] initialization the last 
     element will we swapped with the arr[n] which doesn't exist 
     hence, give a garbage value.
=====================================================================
*/

void BubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 1; i < n; i++) // [+]
    {
        for (int j = 0; j < (n - i); j++) // [++]
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp;
            }
        }
    }
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

    BubbleSort(array, n);
    cout << "The Sorted Array Elements Will Be :";
    for (int i = 0; i < n; i++)
    {
        cout << "The [" << i << "] Element is : " << array[i] << "  ";
    }
    return 0;
}