#include <iostream>
using namespace std;

// Here, Printing a Square type pattern : 
int main()
{
    int n, m;
    cout << "Enter the No. for [n x m] pattern you want : " << endl
         << "[n] for Rows : ";
    cin >> n;
    cout << "[m] for Columns : ";
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}