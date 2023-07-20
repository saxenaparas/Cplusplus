/*
------------------- Searching In Sorted Matrix : ---------------------
======================================================================
~In this if given matrix is sorted that means :
 >> Integers in each row are sorted in ascending from left to right.
 >> Integer in each column are sorted in ascending from top to bottom.
Then,
 By using this above condition we use this type of searching as coded 
 below instead of searching one by one each matrix element.
----------------------------------------------------------------------
~Know more from 27th lecture of C++ [Apna Collage].
======================================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, target;
    cout << "Enter the Size of Array in [N x M] Order: ";
    cin >> N >> M;

    // Input the Sorted Matrix :
    int arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << "Enter the [" << i << "][" << j << "] Element : ";
            cin >> arr[i][j];
        }
    }

    // Target Value :
    cout << "Enter the Element you want to find : ";
    cin >> target;

    // finding :
    int r = 0, c = M - 1;
    bool found = false;
    while (r < N && c >= 0)
    {
        if (arr[r][c] == target){
            found = true;
        }
        if(arr[r][c] > target){
            c--;
        }
        else{
            r++;
        }
    }
    if (found){
        cout << "Element Exist at index of : [" << r-1 << "][" << c << "]";
    }
    else{
        cout << "Element Doesn't Exist";
    }
    return 0;
}