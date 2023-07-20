/*
Multiplication of Two Matrices : 
==================================================================================
>> In this row of first matrice gets multiplied with the columns of second matrix.
>> If one matrix is of order [N x M] then second must be of order [M x L].
>> The product of two matrices will be of order [N x L].
==================================================================================
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int N, M, L;

    // 1st array :
    cout << "Enter the Size of 1st Array in [N x M] Order: ";
    cin >> N >> M;
     
    int arr1[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << "Enter the [" << i << "][" << j << "] Element : ";
            cin >> arr1[i][j];
        }
    }
    
    // 2nd Array :
    cout << "Enter the Size of 2nd Array [M x L] Order So, just Input [L] : ";
    cin >> L;
     
    int arr2[M][L];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < L; j++)
        {
            cout << "Enter the [" << i << "][" << j << "] Element : ";
            cin >> arr2[i][j];
        }
    }
    
    // 3rd Array : 
    int arr3[N][L];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < L; j++)
        {
            arr3[i][j] = 0;
        }
    }
    
    // Multiplication :
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < L; j++)
        {
            for (int k = 0; k < M; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Output :
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < L; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}