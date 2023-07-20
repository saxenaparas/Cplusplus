/*
Palindromic Pattern :
=====================
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
=====================
It's Third code understand it carefully
with the help of Palindromic_Pattern.cpp.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the No. of Rows : ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        int k = rows;
        for (int j = 1; j <= rows + i; j++)
        {
            if (j < rows - i)
                cout << "  ";
            else
                cout << k << " ";
            if (j < rows)
                k--;
            else
                k++;
        }
        cout << endl;
    }
    return 0;
}