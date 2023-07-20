/*
Selection Sorting :
==================================================
Find the minimum array in the unsorted array then
swap it with the element at the begining.
==================================================
*/

#include <iostream>
using namespace std;

void SelectionSort(int array[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = (n - 1); j >= i; j--)
        {
            if (array[j] < array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return;
}

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

    SelectionSort(array, n);
    cout << "The Sorted Array Elements Will Be :";
    for (int i = 0; i < n; i++)
    {
        cout << "The [" << i << "] Element is : " << array[i] << "  ";
    }
    return 0;
}