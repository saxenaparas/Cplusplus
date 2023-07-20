// Finding the factorial using for loop.

#include <iostream>
using namespace std;

int main()
{
    int n, f = 1;
    cout << "Enter the number (for which you want factorial value) : \n";
    cin >> n;

    for (; n > 1; n--)
    {
        f = f * n;
    }

    cout << "The Factorial Value will be : " << f;

    return 0;
}