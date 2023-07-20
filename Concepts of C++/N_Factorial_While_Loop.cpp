// Finding the factorial using while loop.

#include <iostream>
using namespace std;

int main()
{
    int n, f = 1;
    cout << "Finding the Factorial\n"
         << "Enter the number : ";
    cin >> n;

    while (n > 1)
    {
        f = f * n;
        n--;
    }

    cout << "The Factorial Value will be : " << f;

    return 0;
}