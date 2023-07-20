/*
Factorial Of A Number :
==========================================================
Using Recursion function and using just three key points :
1.] n! = n*(n-1)!
2.] 1! = 1
3.] 0! = 1
==========================================================
*/

#include <iostream>
using namespace std;

int factorial(int n)
{
    if ((n == 1) || (n == 0))
    {
        return 1;
    }
    return (n * factorial(n - 1));
}

int main()
{
    int n1, n2;
    cout << "Enter The Two No.s : " << endl;
    cout << "1st is : ";
    cin >> n1;
    cout << "2nd is : ";
    cin >> n2;

    cout << "Factorial Of [" << n1 << "] is :" << factorial(n1) << endl;
    cout << "Factorial Of [" << n2 << "] is :" << factorial(n2) << endl;
    return 0;
}
