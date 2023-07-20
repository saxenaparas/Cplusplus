/*
Fibonacci Series By Using a for loop in a function:
===================================================
In this the next term is the sum of previous two terms.
i.e. in a, b, c, d;
c = a + b; & llly, d = b + c;
*/

#include <iostream>
using namespace std;

void fibonacci(int a)
{
    int t, n1 = 0, n2 = 1;    

    for (int i = 0; i < a; i++)
    {
        cout << n1 << "  ";
        t = n1 + n2;
        n1 = n2;
        n2 = t;
    }
    return;
}

int main()
{
    int n;
    cout << "Enter The No. of Terms : ";
    cin >> n;

    fibonacci(n);
    return 0;
}