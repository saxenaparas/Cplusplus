/*
Sum Of Each Subarray (From The Given Array Of Size N):
======================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cout << "Enter the Size of Array : ";
    cin >> N;
     
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Enter the [" << i << "] Element : ";
        cin >> arr[i];
    }
    
    return 0;
}