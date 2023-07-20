/*
------------------------ Transpose Of A Matrix : ---------------------------
============================================================================
>> In this row elements are replaced by column elements and vice-versa.
>> Now, the new matrix formed is called as transpose of the previous matrix.
============================================================================
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int N, M;
    cout << "Enter the Size of Array in [N x M] Order: ";
    cin >> N >> M;
     
    int arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << "Enter the [" << i << "][" << j << "] Element : ";
            cin >> arr[i][j];
        }
    }
    
    // Transposing of a Matrix : 
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < M; j++)
        {
            // Swapping :
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    
    // Output :
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}