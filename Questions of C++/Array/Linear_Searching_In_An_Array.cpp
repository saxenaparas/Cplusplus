/*
Linear Searching In An Array
=================================================================
Simple way to chk one by one in a linear way chking each element.
=================================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int key, n;
    bool flag = 0;
    cout << "Enter The Size Of The Array : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter The [" << i + 1 << "] Element : ";
        cin >> arr[i];
    }

    cout << "Enter The Key You Want To Search : ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            cout << "The Location Index is : [" << i << "]";
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << -1 << endl
             << "Not Found";
    }
    return 0;
}